# 자바 기본문법

모든 코드는 class 안, 프로그램은 Main 메소드에서 시작

- int 4바이트
- long 8바이트
- double 기본 실수
- String
- 형변환 (int) ~

조건문, 반복문이 c++과 거의 동일

- it-else
- switch
- for
- while
- do-while

백준 문제 풀이 세팅(입출력

1. Scanner
데이터 양이 적을 때 (10만개 이하) 사용
    
    ```cpp
    import java.util.Scanner;
    
    public class Main {
        public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            
            int n = sc.nextInt();    // 정수 읽기
            String s = sc.next();    // 공백 전까지 문자열 읽기
            
            System.out.println(n);   // 출력
        }
    }
    ```
    
2. BufferedReader 
데이터가 많거나 시간 제한이 타이트한 문제
    
    ```cpp
    import java.io.BufferedReader;
    import java.io.InputStreamReader;
    import java.io.IOException;
    import java.util.StringTokenizer;
    
    public class Main {
        public static void main(String[] args) throws IOException { // 예외 처리 필수
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            
            // 한 줄을 통째로 읽기
            String line = br.readLine();
            
            // 공백으로 구분된 숫자를 읽을 때 (StringTokenizer 사용)
            StringTokenizer st = new StringTokenizer(line);
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            
            System.out.println(a + b);
        }
    }
    ```
    

<aside>

파일명이 무엇이든 제출할 땐 반드시 `public class Main` 

코드 상단에 package..  문구가 있으면 컴파일 에러 남

자바는 가비지 컬렉터가 작동하여 메모리 사용량이 c++보다 높게 나옴. 

출력할 내용이 많으면 `System.out.printIn`  대신 `StringBuilder` 나 `BufferedWriter` 를 사용

</aside>

bufferreader 유형

```java
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Solution {
	public static void main(String args[]) throws IOException {
    	//시간, 메모리의 효율을 높일 수 있음
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        String s = st.nextToken();
    }
}
```
이때
println : 자동으로 줄바꿈
print: 줄바꿈 안함

근데
`arr[Integer.parseInt(br.readLine())%42]` 

이게 뭐야 parseInt는 또 뭐고
-> Intefer.parseInt() 는 문자열을 정수로 변환

BufferedReader.readLine은 한 줄을 통째로 읽어옴. 결과물은 무조건 문자열

Scanner vs BufferedReader

- nextInt : 입력을 읽으며 동시에 숫자로 바꿈(편하지만 느림
- readLine : 한 줄 통쨰로 읽음. 숫자로 바꾸는 건 Integer.parseInt로(번거롭지만 빠름

##배열

자바는 배열을 객체로 취급하기 때문에 반드시 new 필요 → 모든 배열은 동적 할당
초기화 자동으로 0 됨

반복문
for(int i = 0 ... //이런 것도 있지만

for(int value : arr)//이렇게 할 수도
//이 경우 arr[에서 0~끝까지] 가 value에 저장됨
