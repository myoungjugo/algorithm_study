#include <iostream>
using namespace std; 

long int fibo(int n, long int cache[]) {
	if (n == 2 || n == 1 ) return 1;  // 종료 조건 

	if (cache[n] != 0) { // 연산 경험 O? 
		return cache[n];
	} 

	cache[n] = (fibo(n - 1, cache) + fibo(n - 2, cache)) % 10009;
	return cache[n];

}

int main() {

	int n;
	long int cache[201] = { 0 };
	cin >> n;
	cout << fibo(n, cache);
	return 0;

}

// shout out to myongju 
// 코드가 섹시해요
