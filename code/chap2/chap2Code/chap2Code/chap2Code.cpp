﻿
//

#include <iostream>

using std::cin; 
using std::endl;
using std::cout; 
using std::string;


// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string) {
	 //return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.


	int i = 0;
	int j = 0;
	while (j != 1) {
		if (*(my_string + i) == '\0') {
			i--;
			cout << *(my_string + i) << endl;
			j++;
			break;
		}
		i++;
	}
	char* answer = (char*)malloc(i * sizeof(char));

	string s = my_string;
	cout << s << endl;
	for (int j = 0; j <= i; j++) {
		*(answer + j) = *(my_string +(i - j));
	}
	answer += '\0';
	cout << answer << endl;
	return answer;



}

int main()
{



	solution("heloo world");

	/*
	
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
	
	
	*/
	int pad = 1;


	return 0;


}
