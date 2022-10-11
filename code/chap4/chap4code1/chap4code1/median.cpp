
#include <algorithm>
#include <stdexcept>
#include <vector>

using std::domain_error;
using std::sort;
using std::vector;

//  평균값을 구하는 함수 
double median(vector<double> vec)
{
    // 벡터의 길이의 데이터 선언
    typedef vector<double>::size_type vec_sz;

    // 입력받은  데이터가 몇개인지 구함
    vec_sz size = vec.size();
    //입력받은 데이터가 없으면 오류
    if (size == 0)
        throw domain_error("median of an empty vector");

    //입력받은 데이터 정렬 
    sort(vec.begin(), vec.end());


    // 중간값을 mid에 넣음
    vec_sz mid = size / 2;

    // 입력받은 값이 짝수이면 mid + mid전값 -1 값을 /2 해서 리턴 
    return size % 2 == 0 ? (vec[mid] + vec[mid - 1]) / 2 : vec[mid];
}