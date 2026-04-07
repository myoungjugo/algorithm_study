### 1. C++에서 2차원 배열 동적 할당하는 법

가장 표준적인 방법은 **포인터의 포인터**를 사용하는 방식.

C++

```c++
int** createArray(int n, int m) {
    // 1. 행(Row) 개수만큼 포인터 배열 할당
    int** arr = new int*[n]; 
    
    for (int i = 0; i < n; i++) {
        // 2. 각 행에 열(Column) 개수만큼 메모리 할당
        arr[i] = new int[m]; 
    }
    return arr;
}
```

> **주의사항:** `new`로 할당했다면 프로그램 종료 전이나 배열 사용이 끝난 후 반드시 `delete`로 메모리를 해제해야 함
> 

---

### 2. 리턴 타입 어떻게 해야 하는지

리턴 타입은 내가 어떤 자료형을 저장하느냐에 따라 달라짐.

- **`int`형 배열일 때:** `int**`
- **`char`형 배열일 때:** `char**`
- **`long long`형 배열일 때:** `long long**`

즉, **(자료형) + 별 두 개(`**`)**를 붙인 형태가 리턴 타입이 됨.

---

### 3. 필요한 라이브러리

- **기본 방식 (`new`, `delete`):** 별도의 라이브러리가 필요 없음. `iostream`만 있어도 충분.
- **추천 방식 (`vector`):** 사실 백준 같은 알고리즘 문제 풀이에서는 메모리 해제가 번거로운 포인터 방식보다 **`std::vector`** 사용을 추천함.

### **백준 추천: vector를 이용한 2차원 배열**

`vector`를 쓰면 메모리 해제를 직접 안 해도 되고, 리턴 타입도 깔끔하다!

C++

```c++
#include <vector>
using namespace std;

// 리턴 타입: vector<vector<int>>
vector<vector<int>> createVectorArray(int n, int m) {
    // n행 m열을 0으로 초기화하며 생성
    vector<vector<int>> arr(n, vector<int>(m, 0));
    return arr;
}
```

***정적 할당**
```c++
int arr1[100][100];
int arr2[100][100];
```
그러나 1000 * 1000 이상의 큰 정적 배열을 메인 함수 안에 선언할 시, 프로그램이 터질 수 있음
(메인 함수 안에서 정적배열은 스택에 들어감 -> 크기가 제한적)
=> 함수 밖(전역)에 선언할 시 큰 크기 수용 가능, 자동으로 0으로 초기화.
또한 정적 배열은 함수에서 배열 통째로 리턴하는 게 안 됨.
- 포인터를 넘기거나
- struct 써야 함
그러나 코드가 복잡해지므로 정적 배열 쓸 때는 보통 main에서 다 처리함



### 초기화하기 ###
1. 정적 배열 (전역 변수 활용)
함수 밖(전역 공간)에 배열을 선언하면 컴파일러가 알아서 모든 값을 0 (bool의 경우 false)으로 초기화해 줌.

C++
bool visited[101][101]; // 전역에 선언하면 자동으로 모두 false

int main() {
    // 이미 모두 false인 상태.
}
만약 함수 내부(지역 변수)에서 선언한다면 아래와 같이 빈 중괄호를 붙여주면 됨.

C++
bool visited[101][101] = {false, }; // 전체 false 초기화
2. std::vector 사용 시
vector는 생성자에서 크기와 초기값을 한 번에 지정할 수 있어 매우 강력.

C++
// n행 m열을 모두 false로 초기화
vector<vector<bool>> visited(n, vector<bool>(m, false));
3. memset 함수 활용 (속도가 매우 빠름)
동적 할당(new)을 했거나, 이미 값이 들어있는 배열을 중간에 한꺼번에 false로 밀어버리고 싶을 때 사용합니다. <cstring> 헤더가 필요.

C++
#include <cstring> // memset 사용을 위해 필요

// 2차원 동적 배열일 경우 각 행마다 초기화
for (int i = 0; i < n; i++) {
    memset(arr[i], false, sizeof(bool) * m);
}

// 정적 배열(전역/지역)일 경우 한 번에 초기화 가능
memset(visited, false, sizeof(visited));
주의: memset은 메모리 바이트 단위로 초기화하기 때문에 0(false)이나 -1 이외의 값으로 초기화할 때는 조심해야 하지만, false로 채울 때는 가장 빠른 성능을 보여줌.

4. std::fill 함수 활용 (가장 안전함)
memset보다 조금 느릴 수 있지만, 모든 자료형에 대해 안전하고 직관적. <algorithm> 헤더를 사용.

C++
#include <algorithm>

// 2차원 배열 visited를 false로 채우기
for (int i = 0; i < n; i++) {
    fill(visited[i], visited[i] + m, false);
}
