
#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include "grade.h"
#include "Student_info.h"

using std::cin;
using std::setprecision;
using std::cout;
using std::sort;
using std::domain_error;
using std::streamsize;
using std::endl;
using std::string;
using std::max;
using std::vector;



int main()
{
    // Student_info구조체 벡터 변수를 선언
    vector<Student_info> students;

    // Student_info변수를 선언
    Student_info record;

    // 문자열 길이를 넣는 변수 선언 
    string::size_type maxlen = 0;   

    // read라는 함수를 이용하여 반목문을 돌림 매개변수로는 Student_ifno구조체 변수를 넣음 입력 종료까지 반복하기 때문에 여러사람 입력 가능
    while (read(cin, record))
    {
        // 기존 입력한 사람 최대 길이와 방금 입력한 사람 이름 비교해서 더길면 최대길이가 입력한 이름 길이가 댐
        maxlen = max(maxlen, record.name.size());

        // 구조체 벡터에 입력받은 값을 넣는다 
        students.push_back(record);
    }

    // sort함수에 구조체를 넣을 수 없고 3번째 인수로 함수를 넣으면 그 함수로 비교를 하기 떄문에 선언한 함수를 3번쨰 인수로 넣어줌 
    sort(students.begin(), students.end(), compare);


    //입력한 사람만큼 반복문을 돌린다 
    for (vector<Student_info>::size_type i = 0;  i != students.size(); ++i)
    {
        //현재 이름이 최대 길이 이름보다 짧으면 그만큼 빈 공백을 넣는다 
        cout << students[i].name
            << string(maxlen + 1 - students[i].name.size(), ' ');


        try
        {
            //입력받은 값의로 최종 성적을 구하는 함수를 통해 값을 얻고 출력 
            double final_grade = grade(students[i]);
            streamsize prec = cout.precision();
            cout << setprecision(3) << final_grade
                << setprecision(prec);
        }
        catch (domain_error e)
        {
            cout << e.what();
        }
        //줄넘김
        cout << endl;
    }
    return 0;
}