list1 = [1,2,3,4,5]
print(list1[::-1]) 
# [5, 4, 3, 2, 1]


# 슬라이싱은 원래 리스트에 영향 안 줌
print(list1)
# [1, 2, 3, 4, 5]


list1.reverse() # 리스트 자체를 뒤집고 저장
print(list1)
# [5, 4, 3, 2, 1]
