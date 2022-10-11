#include "Student_info.h"

using std::istream;
using std::vector;

// sort함수에 구조체를 넣을 수 없고 3번째 인수로 함수를 넣으면 그 함수로 비교를 하는데 이 함수가 그 함수 이름중 어떤게 앞선지 비교
bool compare(const Student_info& x, const Student_info& y)
{
    return x.name < y.name;
}

// istream과 구조체 변수를 매개변수로 받고 사용자에게 이름, 중간성적 , 기말성적을 받아오고 read_hw함수(숙제 점수 받아오는 함수) 호출 
istream& read(istream& is, Student_info& s)
{

    is >> s.name >> s.midterm >> s.final;


    read_hw(is, s.homework);
    return is;
}

// read함수에서 호출이 되는 함수 숙제를 사용자에게 입력받는다  
istream& read_hw(istream& in, vector<double>& hw)
{
    if (in)
    {
        // 숙제 벡터를 초기화 
        hw.clear();

        // 변수 선언하고 그 변수에 값을 받고 입력 종료까지 숙제 벡터에 값을 넣는다 
        double x;
        while (in >> x)
            hw.push_back(x);

        //입력을 다 받았기 때문에 스트림 초기화 
        in.clear();
    }
    return in;
}