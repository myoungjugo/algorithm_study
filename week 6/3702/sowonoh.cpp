"""오류가 있지만 일단 올려봐요.. 나중에 다시 수정예정"""

#include <iostream>
using namespace std;

int main() {
	int r, c;
	cin >> r >> c;

	long long arr[100][100] = { 0 };

	//파스칼삼각형 만들기
	for (int i = 0; i < 100; i++) {

		for (int j = 0; j <= i; j++) {

			//각 행의 맨 앞, 맨 뒤는 1
			if (j == 0 || j == i) {
				arr[i][j] = 1;
			}

			//가운데 값 채우기
			else {
				arr[i][j] = (arr[i - 1][j - 1] % 100000000 + arr[i - 1][j] % 100000000) % 100000000;
			}
		}
	}

	//회전된 위치 출력
	cout << arr[r + c - 2][c - 1] % 100000000;
	return 0;
}

//문제에선 회전된 삼각형이 주어짐
//회전된 삼각형의 (r,c)는 원래 파스칼 삼각형에서의 (r+c-2. c-1)임
