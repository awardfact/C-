#include "Student_info.h"

using std::istream;
using std::vector;

// sort�Լ��� ����ü�� ���� �� ���� 3��° �μ��� �Լ��� ������ �� �Լ��� �񱳸� �ϴµ� �� �Լ��� �� �Լ� �̸��� ��� �ռ��� ��
bool compare(const Student_info& x, const Student_info& y)
{
    return x.name < y.name;
}

// istream�� ����ü ������ �Ű������� �ް� ����ڿ��� �̸�, �߰����� , �⸻������ �޾ƿ��� read_hw�Լ�(���� ���� �޾ƿ��� �Լ�) ȣ�� 
istream& read(istream& is, Student_info& s)
{

    is >> s.name >> s.midterm >> s.final;


    read_hw(is, s.homework);
    return is;
}

// read�Լ����� ȣ���� �Ǵ� �Լ� ������ ����ڿ��� �Է¹޴´�  
istream& read_hw(istream& in, vector<double>& hw)
{
    if (in)
    {
        // ���� ���͸� �ʱ�ȭ 
        hw.clear();

        // ���� �����ϰ� �� ������ ���� �ް� �Է� ������� ���� ���Ϳ� ���� �ִ´� 
        double x;
        while (in >> x)
            hw.push_back(x);

        //�Է��� �� �޾ұ� ������ ��Ʈ�� �ʱ�ȭ 
        in.clear();
    }
    return in;
}