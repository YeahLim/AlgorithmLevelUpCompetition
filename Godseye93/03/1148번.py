import sys

# input = sys.stdin.readline

A_TO_Z = ord('Z') - ord('A') + 1
WORD_LIMIT = 200000
wordsCnt = [[0 for _ in range(A_TO_Z)] for _ in range(WORD_LIMIT)]
n = 0

while True:
    word = sys.stdin.readline().rstrip()
    if word == "-":
        break
    for c in word:
        wordsCnt[n][ord(c) - ord('A')] += 1
    n += 1

answer = []

while True:
    board = sys.stdin.readline().rstrip()
    if board == "#":
        break
    boardCnt = [0 for _ in range(A_TO_Z)]
    for c in board:
        boardCnt[ord(c) - ord('A')] += 1

    result = [0 for _ in range(A_TO_Z)]
    min = WORD_LIMIT + 1
    max = 0

    for i in range(n):
        isValid = True
        for j in range(A_TO_Z):
            if boardCnt[j] < wordsCnt[i][j]:
                isValid = False
                break
        if not isValid:
            continue

        for j in range(A_TO_Z):
            if wordsCnt[i][j] != 0:
                result[j] += 1

    for j in range(A_TO_Z):
        if boardCnt[j] == 0:
            continue
        if min > result[j]:
            min = result[j]
        if max < result[j]:
            max = result[j]

    minChars = ''
    maxChars = ''
    for j in range(A_TO_Z):
        if boardCnt[j] != 0:
            if result[j] == min:
                minChars += chr(ord('A') + j)
            if result[j] == max:
                maxChars += chr(ord('A') + j)

    answer.append(f"{minChars} {min} {maxChars} {max}\n")

print(''.join(answer))
