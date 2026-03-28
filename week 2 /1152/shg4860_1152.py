sentence = input().strip()  # 양 옆 공백 삭제 
count = 0 


if sentence == '':  # 입력이 "   "인 경우 
    print(count)

else : 
    for i in sentence : 
        if i == ' ' : 
            count += 1
    print(count+1)


#strip은 원래 변수의 값을 바꾸지 않고 리턴만 함 
