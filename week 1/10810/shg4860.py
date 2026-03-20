n, m = map(int, input().split())
li = []
for i in range(n):
    li.append(0)

for i in range(m):
    i, j, k = map(int, input().split())
    for a in range(i, j + 1):
        li[a-1] = k

print(*li)
