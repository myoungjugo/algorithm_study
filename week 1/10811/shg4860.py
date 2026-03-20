n,m = map(int, input().split())
list1=[]
for i in range(1,n+1):
    list1.append(i)

for i in range(m):
    a,b=map(int, input().split())
    stack=[]

    for k in range(a-1,b):          # LIFO 
        stack.append(list1[k])
    for k in range(a-1,b):
        list1[k]=(stack.pop())

print(*list1)

# 박미소 님의 코드 참고 
