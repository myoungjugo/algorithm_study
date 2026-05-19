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

//피보나치 수는 n이 90만 증가해도 c++에서 가장 큰 정수 자료형인 unsigned long long 범위 초과.

long int fibo(int n, long int cache[]){
	if(n<=2) return 1; //base case, 종료조건
	
	//메모이제이션
	if(cache[n]!=0){//이미 계산한거면
		return cache[n];
	}
	cache[n] = (fibo(n-1, cache) + fibo(n-2, cache)) %  10009; //오버플로우 나지 않게 애초에 %10009해서 저장

	//Q : 10009 나눈 나머지 저장해 더하면 나중에 그걸 꺼내 쓸 때 값이 오염되는 것 아닌가
	//A : 큰 수 두 개 더한 다음에 10009로 나누나, 애초에 10009로 나눈 나머지들끼리 더한 다음 다시 10009로 나누나 결과 무조건 같음
	//(A + B) mod C = ((A mod C) + (B mod C)) mod C
	
	return cache[n];
}

int main(){
	int n;
	
	long int cache[201] = {0};
	cin >> n;

	cout << fibo(n, cache);
	return 0;
	
	
}
