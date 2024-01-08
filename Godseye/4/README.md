# [백준] 1629번. 곱셈

## ⏰  **time**

1시간

## :pushpin: **Algorithm**

제귀

## ⏲️**Time Complexity**

$O(2^n)$

## :round_pushpin: **Logic**

1. 재귀
   
   ```
   A^B%C 를
   A % 2 == 0 이면
   (A^(B//2)%C * A^(B//2)%C) % C
   A % 2 == 1 이면
   (A^(B//2)%C * A^(B//2)%C*A) % C
   ```

## :black_nib: **Review**

- 
