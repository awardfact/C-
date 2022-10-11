#ifndef GUARD_STUDENT_INFO_H
#define GUARD_STUDENT_INFO_H

// studen_info.cpp에서 선언한 함수와 student_info구조체를 헤더파일로 만든 헤더파일
#include <iostream>
#include <string>
#include <vector>

struct Student_info
{
    std::string name;
    double midterm, final;
    std::vector<double> homework;
};

bool compare(const Student_info&, const Student_info&);
std::istream& read(std::istream&, Student_info&);
std::istream& read_hw(std::istream&, std::vector<double>&);

#endif 