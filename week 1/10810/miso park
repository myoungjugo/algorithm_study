https://www.acmicpc.net/problem/10810

#바구니 개수 n
#공을 넣는 횟수 m
"""
주요 함수 정리 
1. map 함수 
    map(함수, 반복가능한 데이터) 
    여러 데이터에 같은 함수를 한번에 적용해주는 함수
2. arr = [0] * n
    리스트의 값을 n개의 0으로 초기화 하는 방법
"""


n, m= map(int, input().split())
bag=[0]*n #개수

for i in range(m):
    a,b,c=map(int, input().split())
    for k in range(a-1,b):
        bag[k]=c
    

for i in bag:
    print(i ,end=" ")

# *bag → 리스트를 하나씩 풀어서 출력
# print(*bag) 가능

