스택은 LIFO

- ctrl z, 브라우저의 백스페이스, 함수호출스택 등에 쓰임
- 가장 마지막에 들어온 데이터를 가장 먼저 처리해야 하는 특성을 가진 문제에 사용됨
- 제거와 추가는 스택의 top에서만(배열의 끝에서만) 나타남.

![image.png](attachment:047d696f-9bf4-4d44-a70c-9c64af786cd3:image.png)

<aside>

구현 방법(간단하게)

- push : 일단 top++해서 늘리고, data[top]=value 늘어난 곳에 값 넣음
- pop :
</aside>

스택 관련 연산 함수를 만들어 문제 풀이에 사용하기에는 불편함이 있음

→ c++이 STL(standard template library)제공

템플릿 기반으로 설꼐되어 다양한 자료형을 유연하게 담을 수 있음.

- 기본 자료형
- 사용자 정의 자료형(struct나 class)
- 컨테이너(std:vector)

1. STL 스택 헤더 파일

```cpp
#include <stack>
```

1. STL 스택의 선언

```cpp
//형식
stack<자료형> 변수명;

//사용 예
stack<int> s; //int형 자료를 저장하는 스택 s 선언
```

1. 스택의 연산
    - `push(데이터)`  : 스택에 데이터 넣음
    - `top()` : 스택의 top 포인터가 가리키고 있는 값 반환. 아무것도 없을 시 런타임 에러 발생
    - `pop()` : 스택에 가장 늦게 들어온 데이터 삭제. 마찬가지로 아무것도 없을 시 런타임에러 발생
    - `empty()` : 스택이 비어있는지 확인. 비어있으면 true 반환
