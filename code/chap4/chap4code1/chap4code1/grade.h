
#ifndef GUARD_GRADE_H
#define GUARD_GRADE_H

//grade.cpp에서 선언한 함수를 헤더 파일로 만드는 헤더파일
#include <vector>
#include "Student_info.h"

double grade(double, double, double);
double grade(double, double, const std::vector<double>&);
double grade(const Student_info&);

#endif // GUARD_GRADE_H