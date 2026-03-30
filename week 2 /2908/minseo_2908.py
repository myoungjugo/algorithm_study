#2908
a, b = input().split()

# 문자열을 뒤집고 정수로 변환
rev_a = int(a[::-1])
rev_b = int(b[::-1])


print(max(rev_a, rev_b))

''' 만약에 [::-1] 말고 reversed함수를 썼다면:
a, b = input().split()

# 1. reversed 함수 적용 (결과는 이터레이터 형태)
# 2. ''.join()으로 다시 문자열로 합침
# 3. int로 타입 변경
rev_a = int(''.join(reversed(a)))
rev_b = int(''.join(reversed(b)))

if rev_a > rev_b:
    print(rev_a)
else:
    print(rev_b)

저번 문제에서 reversed와 [:: -1]을 비교하면서
요소 하나를 꺼내쓰는게 아니고 이렇게 전체를 뒤집어서 사용할 떄에는
[:: -1]이 훨씬 간결하고 속도가 빠르기 때문에 [:: -1]을 사용했슴다.  
    
'''
