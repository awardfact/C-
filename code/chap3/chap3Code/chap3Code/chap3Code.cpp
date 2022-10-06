// chap3Code.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <ios>
#include <string>
#include <vector>


using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::sort;
using std::string;
using std::streamsize;
using std::vector;




int main()
{
    // 사용자에게 이름을 받아와서 이름 ㅇ출력 
    string name;
    cout << "input your name : ";
    cin >> name;
    cout << "hello" << name << endl;


    // 사용자에게 중간, 기말 점수를 받아옴
    cout << "input your midterm and final exam geades: ";
    double midterm, final;
    cin >> midterm >> final;


    // 사용자에게 과제 점수를 받아옴 
    cout << "input your homework geade";
    vector<double> homework;
    double x;
    while (cin >> x) {
        homework.push_back(x);
    }



    // 과제 점수는 이론상 무한히 받을 수 있기 때문에 몇개를 입력했는지 체크
    typedef vector<double>::size_type vec_sz;
    vec_sz size = homework.size();


    // 과제를 입력하지 않았다면 종료
    if (size == 0) {
        cout << endl << "you must input your grade " << endl;
        return 1;

    }


    // 입력한 과제를 정렬한다 
    sort(homework.begin(), homework.end());


    // 입력 과제 개수 /2 를 mid에 넣고 과제 입력 개수가 짝수이면 중앙 2개값 /2 를 하고 홀수면 가운데 값을 과제 점수로 
    vec_sz mid = size / 2;
    double median;
    median = size % 2 == 0 ? (homework[mid] + homework[mid - 1] / 2) : homework[mid];

    // 과제 20% 중간 40% 기말 40% 비율로 계산해서 총점을 구한다 
    streamsize prec = cout.precision();
    cout << "your final grade is " << setprecision(3) << 0.2 * midterm + 0.4 * final + 0.4 * midterm << setprecision(prec) << endl;


    return 0;


}
