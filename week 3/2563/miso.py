num =int( input())
#100*100의 행렬을 초기화하는 방법 

#지원짱 희경짱의 아이디어를 참고했어요 >.< 무한감사

lis=[[0]*100 for _ in range(100)]

for _ in range(num):
    x,y= map(int, input().split())
    for col in range(x,x+10):
        for row in range(y,y+10):
            lis[col][row]=1
    
sum=0
for i in range(100):
    k=lis[i]
    sum+=k.count(1)

print(sum)
