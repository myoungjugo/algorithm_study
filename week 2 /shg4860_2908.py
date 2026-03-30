n, m = map(str, input().split())
print(max([n[::-1], m[::-1]]))


# 뻘짓
"""
list_n = []
for i in n :
    list_n.append(i)
list_n.reverse()

list_m = []
for i in m :
    list_m.append(i)
list_m.reverse()


print(max([''.join(list_n), ''.join(list_m)]))
"""

# Q. 구분자.join(iterable) : 
# iterable의 요소들을 구분자를 통해 문자열로 합침 (이터러블 -> 문자열)
# 그럼, 문자열 -> 문자열 가능? 
