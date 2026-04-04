#include <iostream>
#include <vector>
using namespace std;

int main() {   // 요즘 컴파일러는 int로 꼭 반환해야 에러 안 남
	vector<vector<int>> dohwaji(100, vector<int>(100, 0));
	int n = 0;  // 사각형 갯수
	int color = 0; // 색칠된 부위 넓이

	cin >> n;  // 갯수 받기 

	for (int i = 0; i < n; i++) {
		int x = 0;
		int y = 0;
		cin >> x >> y;
		for (int xi = x; xi < x + 10; xi++) {
			for (int yi = y; yi < y + 10; yi++) {
				if (dohwaji[xi][yi] == 0) {
					dohwaji[xi][yi] = 1;   // 안 칠해져 있으면 칠하라
				}
			}
		}
	}
 // 색칠된 부분 넓이 계산 
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (dohwaji[i][j] == 1) {
				color++;
			}
		}
	}

	cout << color;

	return 0;
}

// 지원님 코드 참고 (존경해여)
