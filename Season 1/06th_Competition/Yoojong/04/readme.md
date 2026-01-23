# [백준] 체스판 다시 칠하기 (1018번🩶5️⃣)

## ⏰  **time**

30분

## :pushpin: **Algorithm**

브루트포스

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**

- 모두 확인
```
n,m=map(int,input().split())
data = []
for _ in range(n):
    d = list(input())
    data.append(d)

odds = []
for i_n in range(n-7):
    for j_m in range(m-7):
        odd = 0
        for i in range(i_n, i_n + 8):
            for j in range(j_m, j_m + 8):
                #case 1: starts with 'W'
                if i % 2 ==0 and j % 2 ==0: #무조건 W
                    if data[i][j] != 'W':
                        odd +=1
                elif i % 2 ==0 and j % 2 !=0: #무조건 B
                    if data[i][j] != 'B':
                        odd+=1
                elif i % 2 !=0 and j% 2 == 0: #무조건 B
                    if data[i][j] != 'B':
                        odd +=1
                elif i % 2 !=0 and j%2 !=0: #무조건 W
                    if data[i][j] != 'W':
                        odd +=1
        odds.append(odd)
        odd = 0
        for i in range(i_n, i_n + 8):
            for j in range(j_m, j_m + 8):
                #case 2: starts with 'B'
                if i % 2 ==0 and j % 2 ==0: #무조건 B
                    if data[i][j] != 'B':
                        odd +=1
                elif i % 2 ==0 and j % 2 !=0: #무조건 W
                    if data[i][j] != 'W':
                        odd+=1
                elif i % 2 !=0 and j% 2 == 0: #무조건 W
                    if data[i][j] != 'W':
                        odd +=1
                elif i % 2 !=0 and j%2 !=0: #무조건 B
                    if data[i][j] != 'B':
                        odd +=1
        odds.append(odd)

print(min(odds))


```
  

## :black_nib: **Review**

- 경우 두가지를 for문으로 나누지 말고, 한쪽에 if 두번 쓰면서 나눌걸...
