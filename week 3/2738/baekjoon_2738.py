import sys
input = sys.stdin.readline

n, m = map(int, input().split())

# 행렬 A를 n줄에 걸쳐 입력받아 2차원 리스트로 저장
A = [list(map(int, input().split())) for _ in range(n)]
# 같은 방식
B = [list(map(int, input().split())) for _ in range(n)]

for i in range(n):
     # A[i][j] + B[i][j] -> 같은 위치의 원소끼리 더함
     # print(*리스트): * -> 공백 구문. 저번에 썼음
    print(*[A[i][j] + B[i][j] for j in range(m)])


