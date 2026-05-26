#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {
	string num1, num2; 
	cin >> num1 >> num2;   // 스페이스, 엔터, 탭 기준으로 나눠 받음 

	vector<int> re;

	int carry = 0;
	int sz1 = num1.size() - 1;
	int sz2 = num2.size() - 1;


	while (sz1 >= 0 || sz2 >= 0 || carry > 0 ) {

		int sr = carry; // small_result 

		if (sz1 >= 0) {  // 문자열의 인덱스: 왼->오 오름차순 
			sr += num1[sz1] - '0';
			sz1--;   // 다음 앞자리로 이동 
		}

		if (sz2 >= 0) {
			sr += num2[sz2] - '0';
			sz2--; 
		}

		re.push_back(sr % 10);
		carry = sr / 10; 

	}
	
	for (int i = re.size()-1; i >= 0; i--) {
		cout << re[i];
	}

	return 0;
}


// int 
c++의 int() : 문자열 > 정수 변환 X 
              문자열의 아스키코드 값 (정수)으로 바꿈
대안: 문자열 뒤 [ - '0' ] 연산 
      stio("정수형 문자열") 함수 사용  

// carry > 0 
999 + 1 = 1000 같은 연산에서,
  while (sz1 >= 0 || sz2 >= 0 ) 사용 시 결과는 000으로 나옴 
  이를 방지하고자 carry > 0 추가 

// vector 
가물가물함.... 
push_back()append  pop_back()remove  vector[i] = at(i) 
size()             empty()           clear() 
for (int elem: vec) {} 
