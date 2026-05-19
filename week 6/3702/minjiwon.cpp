#include <iostream>
using namespace std;

int pas[50][50] = { 0 }; // 벡터 써야하나 싶었는데 배열로 구현하는게 더 쉬울 것 같았다.
// 배열 크기가 50 이하이기 때문에 사이즈를 지정
// 나중에 값이 들어왔는지 아닌지 판단할 때 편하려고 0으로 설정

int pascal(int a, int b) {
    if (a == 1 || b == 1)
        return pas[a][b] = 1;
	if (pas[a][b])
		return pas[a][b];
	return pas[a][b] = (pascal(a, b - 1)+pascal(a - 1, b)) % 100000000; // 회전된 삼각형이라 왼쪽, 위쪽 값으로 더함
}

int main(){
	int a, b;
	cin >> a >> b;
	cout << pascal(a, b) << '\n';
}
