#include <iostream>
#include <string>
using namespace std;

int main() {
	int num;
	cin >> num;

	string s;
	cin >> s;

	int sum = 0;
	for (int i = 0; i < num; i++)
		sum += s[i] - '0';  //s는 string상태.. 문자를 숫자로 바꾸는 과정이 필요함
	cout << sum;
}
