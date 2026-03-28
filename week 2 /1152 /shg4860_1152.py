sentence = input().strip()  # 문자 앞 공백 지우기 
count = 0 


if sentence == '':  # "  "이 입력됐을 시 
    print(count)

else : 
    for i in sentence : 
        if i == ' ' : 
            count += 1
    print(count+1)


#strip은 원래 변수의 값을 바꾸지 않고 리턴만 함 
