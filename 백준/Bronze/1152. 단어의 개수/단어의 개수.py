# 입력 받기
sentence = input().strip()  # 양쪽 공백 제거

# 공백 기준으로 단어 나누기
words = sentence.split()    # split()은 공백 연속도 처리 가능

# 단어 개수 출력
print(len(words))