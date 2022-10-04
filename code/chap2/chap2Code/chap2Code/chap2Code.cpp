
//

#include <iostream>

using std::cin; 
using std::endl;
using std::cout; 
using std::string;


int main()
{
	cout << "input yout name !: '";
	
	string name;
	cin >> name;

	string greet = "hello,  " + name + "!";

	int pad = 1;
	int rows = pad * 2 + 3;
	string::size_type cols = greet.size() + pad * 2 + 2;

	cout << endl;

	for (int r = 0; r != rows; ++r) {
		string::size_type c = 0;
		while (c != cols) {
			// 행의 처음은 별만 있고 열의 처음도 별이라 2번째 행의 두번쨰 열은 입력한 이름을 출력 
			if (r == pad + 1 && c == pad + 1) {
				cout << greet;
				c += greet.size();
			}
			// 나머지 행과 열은 빈칸 또는 별 출력 
			else {
				if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
					cout << "*";

				}
				else {
					cout << " ";
				}
				c++;
			}


		}
		// 행이 끝나면 줄바꿈
		cout << endl;
	}

	return 0;


}
