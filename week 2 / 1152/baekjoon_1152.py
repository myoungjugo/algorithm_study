#1152
text = input()

words = text.split()

print(len(words))



'''오답 코드
    
    text = input()

    # 원래 논리: 단어개수 = 공백 개수 + 1  --> count로 공백 개수를 세어서 단어 개수를 구하려 했음
    word_count = text.count(' ') + 1

    그치만 입력이 빈 문자열인 경우나 연속공백, 앞뒤공백일 수 있어서 split을 사용하는게 더 안전하고 빠름

    print(word_count)
    '''