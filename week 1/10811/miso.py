n,m = map(int, input().split())
bag=[]
for i in range(1,n+1):
    bag.append(i)

for i in range(m):
    a,b=map(int, input().split())
    stack=[]
    #stack의 LIFO 방식 사용
    for k in range(a-1,b):
        stack.append(bag[k])
    for k in range(a-1,b):
        bag[k]=(stack.pop())

print(*bag)
