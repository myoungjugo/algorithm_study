#10810
# 1. 입력 받기
n, m = map(int, input().split())

# 2. 바구니 초기화 - 0으로 초기화된 리스트 생성(바구니 n개)
baskets = [0] * n

# 3. M번 동안 공 넣기 
for _ in range(m):
    i, j, k = map(int, input().split())
    
    # i번부터 j번까지 k번 공을 넣음
    # 리스트 인덱스는 0부터 시작하므로 범위는 i-1부터 j까지 (j는 포함 안 되므로 j-1까지 반영됨)
    for index in range(i-1, j):
        baskets[index] = k

# 4. 결과 출력 - 공백으로 구분하여 출력했습니당
print(*(baskets))
