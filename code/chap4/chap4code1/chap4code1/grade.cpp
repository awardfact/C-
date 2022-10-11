
#include <stdexcept>
#include <vector>
#include "grade.h"
#include "median.h"
#include "Student_info.h"

using std::domain_error;
using std::vector;



// 중간성적 기말성적 숙제 성적을 비율에 맞춰서 계산후 평균성적을 구함 
double grade(double midterm, double final, double homework)
{
    return 0.2 * midterm + 0.4 * final + 0.4 * homework;
}

//처음 grade에서 호출하는 함수 숙제를 하나도 입력 안했으면 입력하라고 에러출력 아니면 grade호출 호출할때 median함수를 호출해서 숙제의 평균값을 구함 
double grade(double midterm, double final, const vector<double>& hw)
{
    if (hw.size() == 0)
        throw domain_error("student has done no homework");
    return grade(midterm, final, median(hw));
}

// 성적을 리턴해주는 함수인데 처음 이함수를 받고 이 함수에서 받은 매개변수를 가지고 성적을 구함 
double grade(const Student_info& s)
{
    return grade(s.midterm, s.final, s.homework);
}