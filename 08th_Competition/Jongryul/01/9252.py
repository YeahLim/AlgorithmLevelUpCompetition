import sys
input = sys.stdin.readline

a = 'x' + input().rstrip()
b = 'x' + input().rstrip()

la = len(a)
lb = len(b)

dp = [[0] * lb for _ in range(la)]
word = []

for i in range(la):
    for j in range(lb):
        if not i or not j:
            dp[i][j] = 0

        elif a[i] == b[j]:
            dp[i][j] = dp[i-1][j-1] + 1

        else:
            if dp[i-1][j] > dp[i][j-1]:
                dp[i][j] = dp[i-1][j]

            else:
                dp[i][j] = dp[i][j-1]

r, c = la-1, lb-1

while dp[r][c] > 0:
    if dp[r][c] == dp[r-1][c]:
        r -= 1
    elif dp[r][c] == dp[r][c-1]:
        c -= 1
    else:
        word.append(a[r])
        r -= 1
        c -= 1

word.reverse()

print(dp[la-1][lb-1])
if dp[la-1][lb-1]:
    print(''.join(word))