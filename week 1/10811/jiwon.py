n, m = map(int, input().split())

basket = [i for i in range(1, n+1)] # 이건 0 채워넣는게 아님, 주의할 점 -> 1이 0번째 index 에 있음

for _ in range(m):
    i, j = map(int, input().split())
    temp = basket[i-1:j] # 여기서 [i-1, j]로 실수하지 말기. 슬라이싱임!
    temp.reverse() # 이렇게 하거나 arr[i:j+1] = arr[i:j+1][::-1] 이렇게 가능한데, [::-1]은 새로운 리스트를 만드는 것
    basket[i-1:j] = temp

for i in range(n):
    print(basket[i], end = ' ')
