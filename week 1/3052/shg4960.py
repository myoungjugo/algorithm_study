list1 = []

for i in range(10):
    num = int(input())
    list1.append(num)


list_result = []

for element in list1 : 
    re = element % 42
    list_result.append(re)

print(len(set(list_result))) 



# 배운 것 # 
_ 객체지향 이란? _  
    객체란, 데이터 & 기능이 함께 있는 묶음
    코드 구조 깔끔해짐, 이해 & 유지보수 쉬움
    객체지향 언어를 사용한다 한들, 여전히 코드의 순서는 상관있음
