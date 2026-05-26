#include <iostream>
#include <string>

using namespace std;

// 전역변수로 stack 구현


int stack[200];
int top = -1;   // cpp은 음수 인덱스 X

void push(int v) {

	if (top < -1) {
		return;
	}
	stack[++top] = v;
}

int pop(){
	if (top <= -1) {
		return 0;
	}
	top--;
	return stack[top+1];
}


bool isNumber(string s) {
	for (int i = 0; i < s.length(); i++) {
		if (s[i] < '0' || s[i] > '9') {
			return false;
		}
	}
	return true;
}

// 나중에 class로 구현할 것 

int main() {

	string i; 

	while (cin >> i){


	/* 

	  if (i >= "0" && i <= "9") {
			push(stoi(i));
		}

		이 친구는 일의자리 피연산자만 가능

	*/

		if (isNumber(i)) {
			push(stoi(i));
		}

 		else {     // 문자일 시 Stack 속 숫자들 꺼내서 연산 후 다시 넣기 
			int x1 = pop();
			int x2 = pop();

			if (i == "+") push(x1 + x2);
			else if (i == "-") push(x1 - x2);
			else if (i == "*") push(x1 * x2);
			else if (i == "/") push(x1 / x2);
		}
	}
	
	cout << stack[top];
		
	return 0;
}
