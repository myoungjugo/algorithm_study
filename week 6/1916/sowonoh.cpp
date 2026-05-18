#include <iostream>
using namespace std;

int Fibo(int a) {
	if (a == 1||a==2) {
		return 1;
	}
	
	return (Fibo(a - 1) + Fibo(a - 2)) % 10009;
}



int main() {
	int n;
	cin >> n;

	cout << Fibo(n) << endl;
}

"""이 코드의 한계: 코드업에서 시간초과뜸.. 하지만 재귀함수를 사용하라고 문제에서 명시됨. gpt: 메모이제이션(dp 배열 저장) 이라는 방법 찾아보기"""
