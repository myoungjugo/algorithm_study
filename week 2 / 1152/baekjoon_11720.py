#11720
n = int(input())
numbers = input()

total = 0
for char in numbers:
    total += int(char)  # 각 문자를 정수로 바꿔서 바로 합산
print(total)


'''
제일 먼저 생각했던 풀이:

n = int(input())
listN = input()
total_sum = 0

for i in range(n): # n-1까지 하면 마지막 숫자를 놓치므로 n까지 돌아야 함
    if i == 0:
        sliced = listN[0]
    else:
        # i가 1일 때 listN[0:1] -> 0번째 글자만 가져옴
        sliced = listN[i:i+1] # 여기서 i:i+1로 한 이유: [i-1:i]는 이전 글자를 중복해서 가져올 위험이 있음
    
    total_sum += int(sliced) # 문자열을 숫자로 바꿔서 더함

print(total_sum)

그치만 문자열은 순회가 가능하기 때문에 굳이 이렇게 인덱스계산재앙 없이도 할 수 있어서 바꿨습니다.



'''