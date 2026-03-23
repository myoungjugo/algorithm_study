n, m = map(int, input().split()) # map(함수, 반복가능한것) -> int 함수를 다 적용시켜줌
basket = [0] * (n+1)

for _ in range(m):
  i, j, k = map(int, input().split())
  for ball in range(i, j+1): 
    basket[ball] = k # 문제를 잘 이해하자... 주어진 k번의 공을 모든 바구니에 넣는것!
    
for i in range(1, n+1): 
  print(basket[i], end=' ') # 한 줄에 다 출력하기 위해 end 사용 -> 아니면 줄이 다 건너띄어짐
  # print(*basket[1:]) 이렇게 하면 *이 리스트를 자동으로 공백 구분해서 출력해줌
