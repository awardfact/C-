
#include <algorithm>
#include <stdexcept>
#include <vector>

using std::domain_error;
using std::sort;
using std::vector;

//  ��հ��� ���ϴ� �Լ� 
double median(vector<double> vec)
{
    // ������ ������ ������ ����
    typedef vector<double>::size_type vec_sz;

    // �Է¹���  �����Ͱ� ����� ����
    vec_sz size = vec.size();
    //�Է¹��� �����Ͱ� ������ ����
    if (size == 0)
        throw domain_error("median of an empty vector");

    //�Է¹��� ������ ���� 
    sort(vec.begin(), vec.end());


    // �߰����� mid�� ����
    vec_sz mid = size / 2;

    // �Է¹��� ���� ¦���̸� mid + mid���� -1 ���� /2 �ؼ� ���� 
    return size % 2 == 0 ? (vec[mid] + vec[mid - 1]) / 2 : vec[mid];
}