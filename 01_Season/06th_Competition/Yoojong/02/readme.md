# [백준] 분해합 (2231번🩶5️⃣)

## ⏰  **time**

15분

## :pushpin: **Algorithm**

브루트포스

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- int를 str로 바꿔서 int로 각 자리 나눈후 계산.
```
n = int(input())
ans = 0
for i in range(1, n):
    i_str = str(i)
    i_list = list(map(int,i_str))
    
    if n == (sum(i_list)+i):
        ans = i
        break

if ans ==0:
    print(0)
else:
    print(ans)
```
  

## :black_nib: **Review**

- list를 만들어서 계산을 하였는데 애초에 list를 만들 필요가 없었네
- 바로 그냥 sum(map(int, i_str) 하면 됐다...
