list1 = []

for i in range(10):
    num = int(input())
    list1.append(num)


list_result = []

for element in list1 : 
    re = element % 42
    list_result.append(re)

print(len(set(list_result))) 
