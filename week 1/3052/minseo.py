#3052
# 1.중복을 제거해야해서 리스트로 만드는거 대신 set을 씀
remainders = set()
#2. 10개 입력받고 42로 나눈 나머지를 집합에 추가함
for _ in range(10):
    n = int(input())
    remainders.add(n % 42)
    
print(len(remainders))