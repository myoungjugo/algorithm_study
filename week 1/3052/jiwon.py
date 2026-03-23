n = [0]*10

for i in range(10): 
    n[i]=int(input()) # input 한번 호출할 때마다 한 줄 입력 받음 -> 이건 10810 문제와 다르게 10번 입력 받는 구조

# map
"""
n[i] = map(int, input().split())
👉 이건 숫자가 아니라 map 객체가 들어감
n, m = map(int, input().split()) 처럼 값을 꺼내야 됨.
"""

r = set()
for i in range(10): 
    r.add(n[i]%42) 
print(len(r))
