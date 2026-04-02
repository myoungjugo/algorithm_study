"""
첫 풀이
n, m = map(int, input().split())
n_mat = [[0]*m for _ in range(n)]
m_mat = [[0]*m for _ in range(n)]
for i in range(2):
  for j in range(n):
    if i == 0:
      n_mat[j]= input().split()
    else:
      m_mat[j]=input().split()
total_mat = [[0]*m for _ in range(n)]
for i in range(n):
    for j in range(m):
        total_mat[i][j]=int(n_mat[i][j])+int(m_mat[i][j])
        print(total_mat[i][j], end=' ')
"""
n, m = map(int, input().split())
A, B = [], []
# 한줄씩 리스트로 만들기
for i in range(n):
  A.append(list(map(int, input().split())))
for i in range(n):
  B.append(list(map(int, input().split())))
# 출력 형식 맞추기
for i in range(n):
  for j in range(m):
    print(A[i][j] + B[i][j], end = ' ')
