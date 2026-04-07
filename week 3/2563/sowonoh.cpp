#include <iostream>
using namespace std;

int main() {
	//100*100 도화지 제작, 0으로 값 초기화
	int paper[100][100] = { 0 };

	int n;  //색종이 개수 입력 받기
	cin >> n;

	//색종이 등장
	int x, y;   //색종이 왼쪽 아래 꼭짓점
	for (int k = 0; k < n; k++) {
		cin >> x >> y;

		for (int i = x; i < x + 10; i++) {
			for (int j = y; j < y + 10; j++)
				paper[i][j] = 1;
		}
	}
	//x~x+9, y~y+9 색종이 범위를 1로 채우기, 이렇게 할 경우 겹치는 부분에 덮어도 1이기 때문에 겹침 조건을 추가하지 않아도 됨

	//넓이 계산
	int count = 0;
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (paper[i][j] == 1)
				count++;
		}
	}
	cout << count;
	return 0;
}	


/*신박한 점
색종이의 왼쪽 아래 꼭짓점이 주어졌으므로 위쪽을 향할때 y~y-9범위를 1로 채워야한다고 생각했음
->좌표 방향을 엄격하게 맞추지 않아도 면적만 구하면 되기 때문에 범위 통일시켜도 됨
*/
