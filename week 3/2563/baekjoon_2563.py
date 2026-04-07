
import sys
input = sys.stdin.readline

paper = [[0] * 100 for _ in range(100)]

n = int(input())
for _ in range(n):
    x, y = map(int, input().split())
    for i in range(y, y + 10):
        for j in range(x, x + 10):
            paper[i][j] = 1

print(sum(sum(row) for row in paper))


'''
만약에 100X100이상을 받아야 한다면
import sys
input = sys.stdin.readline

covered = set()

n = int(input())
for _ in range(n):
    x, y = map(int, input().split())
    for i in range(y, y + 10):
        for j in range(x, x + 10):
            covered.add((i, j))

print(len(covered))
'''
