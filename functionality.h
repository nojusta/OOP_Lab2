#ifndef FUNCTIONALITY_H
#define FUNCTIONALITY_H

#include <string>
#include <cstdlib> 
#include <vector>
#include "student.h" 
#include "calculations.h"

int getContainerTypeFromUser();
int generateGrade();
std::string generateName();
std::string generateLastName();
std::string isString(const std::string& prompt);
int isGrade(const std::string& prompt);
void generateFile(int n);
void outputToTerminal(const std::vector<Student>& studentsLow, const std::vector<Student>& studentsHigh, bool Median);
template <typename Container>
void outputToFile(const Container& students, size_t m, bool Median, const std::string& filename);

#endif // FUNCTIONALITY_H