#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <deque>
#include <list>

class Student { // klase Student
private:
    std::string firstName, lastName;
    std::vector<int> homeworkResults;
    int examResults;

public:
    
    Student(); // konstruktorius
    Student(const std::string& firstName, const std::string& lastName, int examResults, const std::vector<int>& homeworkResults); // konstruktorius su parametrais
    Student(const Student& other);// copy konstruktorius
    Student(Student&& other) noexcept; // move konstruktorius
    Student& operator=(const Student& other); // copy priskyrimo operatorius
    Student& operator=(Student&& other) noexcept; // move priskyrimo operatorius

    ~Student() {} // destruktorius

    // get'eriai ir set'eriai
    inline std::string getFirstName() const { return firstName; } 
    inline std::string getLastName() const { return lastName; }
    const std::vector<int>& getHomeworkResults() const { return homeworkResults; }
    int getExamResults() const { return examResults; }

    void setFirstName(std::string firstName) { this->firstName = std::move(firstName); }
    void setLastName(std::string lastName) { this->lastName = std::move(lastName); }
    void addHomeworkResult(int result) { homeworkResults.push_back(result); }
    void clearHomeworkResults() { homeworkResults.clear(); }
    void setExamResults(int examResults) { this->examResults = examResults; }
    void setHomeworkResults(std::vector<int> results) { homeworkResults = std::move(results); }

    double calculateMedian() const;
    double calculateAverage() const;
    double calculateFinalGrade(bool median) const;
};

#endif // STUDENT_H