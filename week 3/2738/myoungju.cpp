#include <iostream>
using namespace std;

//할당 및 입력 함수
int** createAndInput(int n, int m) {
    int** arr = new int*[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[m];
        for (int j = 0; j < m; j++) cin >> arr[i][j];
    }
    return arr;
}

// 메모리 해제 그것은 정말 중요한
void freeArray(int** arr, int n) {
    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;
}

int main() {
    
    ios::sync_with_stdio(false);
	cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;

    // 두 개의 배열 생성 및 입력
    int** arr1 = createAndInput(n, m);
    int** arr2 = createAndInput(n, m);

    // 더하면서 바로 결과 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr1[i][j] + arr2[i][j] << " ";
        }
        cout << "\n";
    }

    // 해제
    freeArray(arr1, n);
    freeArray(arr2, n);

    return 0;
}
