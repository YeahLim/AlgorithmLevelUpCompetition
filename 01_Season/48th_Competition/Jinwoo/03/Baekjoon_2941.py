import sys
input = sys.stdin.readline

word = input().strip()

# 크로아티아 알파벳 목록
croatian_alphabets = ["c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="]

# 크로아티아 알파벳 치환
for croatian in croatian_alphabets:
    word = word.replace(croatian, "*")  # 크로아티아 알파벳을 "*"로 치환

print(len(word))
