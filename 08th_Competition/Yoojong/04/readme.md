# [백준] 소수 구하기 (1929 번)

## ⏰  **time**

30분

## :pushpin: **Algorithm**

수학

## ⏲️**Time Complexity**

$O( N^(3/2)   )$

## :round_pushpin: **Logic**

- 소수를 구하기 그 수의 루트2 보다 작은 수까지 다 돌리는 풀이
'''
- for i in range(n, m+1):
    if i ==1:
        continue
    for j in range(2, int(i**0.5)+1):
        if i%j==0:
            break
    else:
        print(i)
'''
## :black_nib: **Review**
- 맨밑에 있는 else가 참 성가셨다.
- 저렇게 하면 안될 줄 알고 flag를 세워서 풀었는데 시간초과가 났다.
