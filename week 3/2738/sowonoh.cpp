#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int** a = new int* [n];
	int** b = new int* [n];
	int** c = new int* [n];

	for (int i = 0; i < n; i++) {
		a[i] = new int[m];
		b[i] = new int[m];
		c[i] = new int[m];
	}

	//A입력받기
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}

	//B입력받기
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> b[i][j];
		}
	}

	//A와 B 더하기
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			c[i][j] = a[i][j] + b[i][j];
		}
	}

	//출력
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << c[i][j] << " ";
		}
		cout << "\n";
	}

	//메모리 해제
	for (int i = 0; i < n; i++) {
		delete[] a[i];   //각 행 삭제
	}
	delete[] a;   //행 주소 배열 삭제
	
	for (int i = 0; i < n; i++) {
		delete[] b[i];
	}
	delete[] b;   

	for (int i = 0; i < n; i++) {
		delete[] c[i];
	}
	delete[] c;

	return 0;
}
