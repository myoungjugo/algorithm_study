package org.codeup;


import java.util.Scanner;

public class Main {
    // N은 최대 200 ->  201 크기의 static 배열 선언
    // 자바가 알아서 모든 칸을 0으로 초기화해줌
    static int[] memo = new int[201];

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        if (sc.hasNextInt()) {
            int n = sc.nextInt();
            System.out.println(fibonacci(n));
        }

        sc.close();
    }

    public static int fibonacci(int n) {
        // Base Case: 1번째와 2번째 피보나치 수는 무조건 1
        if (n == 1 || n == 2) {
            return 1;
        }

        // 2. 이미 계산한 적이 있는 값이면 (0이 아니라면) 저장된 값을 바로 반환
        if (memo[n] != 0) {
            return memo[n];
        }

        // 3. 계산한 적이 없다면 재귀로 구한 뒤, 배열에 저장하고 반환 (10009 나머지 연산 필수)
        memo[n] = (fibonacci(n - 1) + fibonacci(n - 2)) % 10009;

        return memo[n];
    }
}
