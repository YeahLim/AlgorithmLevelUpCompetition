# [백준] 잃어버린 괄호 (1541)

## ⏰  **time**
30분

## :pushpin: **Algorithm**
수학, 브루스

## ⏲️**Time Complexity**
$O(n+m+k)$

## :round_pushpin: **Logic**
- '-' 로 등분 후, 등분끼리 다 더하고 다시 뺀다.
'''
for i in equation:
    sum = 0
    tmp = i.split('+')
    for j in tmp:
        sum += int(j)
    num.append(sum)
n = num[0]
for i in range(1,len(num)):
    n -= num[i]

'''
## :black_nib: **Review**
그냥 수학문제인 듯
