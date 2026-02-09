# [백준] N-Queen (9663번)

## ⏰  **time**

6시간

## :pushpin: **Algorithm**

벡트레킹

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**

- 체스의 성질 : 대각선, 같은 열이지 않은 곳에만 놓을 수 있다.
```
    (col[x] == col[j] || abs(col[x] - col[j]) == x - j)
```

## :black_nib: **Review**

- 혼자하려고 끙끙 이틀을 앓았지만... 결국 8까지만 할 수 있는 코드를 완성했고 실패했다.
- 결말이 인터넷에 찾아봤다는게 너무 슬프다..
