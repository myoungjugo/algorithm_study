#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;

	reverse(a.begin(), a.end());  //reverse(시작위치,끝위치);
	reverse(b.begin(), b.end());

	if (a>b) {  
		cout << a;    //문자열 비교.. 알파벳일 경우.. 사전순, 자리수같은 숫자일 경우..숫자비교
	}
	else 
		cout << b;
}
