#include<iostream>
using namespace std;
//메모이제이션 이용
//피보나치 식 : f(n) = f(n-1) + f(n-2)
//n번째 항목에 n-1번째와 n-2번째를 더한 걸 저장
//이미 값이 저장되어있다면 꺼내 쓰고 그렇지 않으면 연산함
//배열을 주고받아야 -> 파라미터에 배열 주소가 포함되어야 call by address
//=> 함수에 리턴값이 없음 -> 근데 그러면 재귀를 어떻게 해
//-> 아님. 어차피 그 안에서 재귀 계속 들어가다가 결국 배열에서 꺼내서 리턴해야 하니까
//리턴값 일단 long int로 해봄

long int fibo(int n, long int cache[]){
	if(n<=2) return 1; //base case, 종료조건
	
	//메모이제이션
	if(cache[n]!=0){//이미 계산한거면
		return cache[n];
	}
	cache[n] = (fibo(n-1, cache) + fibo(n-2, cache)) %  10009;
	return cache[n];
}

int main(){
	int n;
	int ret;
	long int cache[201] = {0};
	cin >> n;
	ret = fibo(n, cache);
	cout << ret;
	return 0;
	
	
}
