#include <iostream>
#include <vector>
using namespace std;
vector<int> f;

int Fibo(int num)
{
	if (f[num] != -1)
		return f[num];
	if (num == 1 || num == 2)
		return f[num] = 1;
	return f[num] = (Fibo(num-1) + Fibo(num-2)) % 10009;
}

int main(){
	int n;
	cin >> n;
	f.resize(n + 1, -1);
	cout << Fibo(n);
	return 0;
}
// 일단 cpp 코드가 너무 오랜만이라 구현 자체가 힘들엇당...
// 옛날에 제출했던 코드를 참고하면서 구현햇다
// f를 그냥 지정하면 빈 벡터가 되는데 그렇게 되면 f[num] 을 호출했을 때 런타임 에러 -> resize로 크기 지정, 값 다 채워줌(-1)
