# [백준] 영화감독 숌 (1436번🩶5️⃣)

## ⏰  **time**

10분

## :pushpin: **Algorithm**

브루트포스

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 처음 숫자부터 무한까지 str으로 변환해서 666이 있으면 추가 
```
n = int(input())
ans =[]

count = 0 
for i in range(666, 987654321):
    i_str = str(i)
    if '666' in i_str:
        ans.append(i)
        count+=1

    if count == n:
        break

ans = sorted(ans)

print(ans[n-1])
```
  

## :black_nib: **Review**
- .
