#10811
# 1. N(바구니 개수)과 M(순서 바꿀 횟수) 입력받기
n, m = map(int, input().split())

# 2. 1부터 N까지 번호가 적힌 바구니 (리스트) 생성
baskets = [i for i in range(1, n + 1)]

# 3. M번 동안 순서 뒤집기 작업 반복
for _ in range(m):
    i, j = map(int, input().split())
    
    # i번째부터 j번째까지의 구간을 슬라이싱해서 뒤집기
    # 틀렸던 부분 => 인덱스 주의!!: i번째는 인덱스 i-1, j번째는 인덱스 j-1까지 포함해야 하므로 슬라이싱은 [i-1:j]
    target_part = baskets[i-1:j]
    target_part.reverse()  # target_part[::-1]로 할 수도 있음
    
    # 뒤집힌 부분을 원래 위치에 다시 끼워넣기
    baskets[i-1:j] = target_part


print(*baskets)