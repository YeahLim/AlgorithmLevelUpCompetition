# [백준] 11444번. 피보나치 수 6

## ⏰  **time**

2시간

## :pushpin: **Algorithm**

메모이제이션

## ⏲️**Time Complexity**

$O(2^n)$

## :round_pushpin: **Logic**

1. 메모이제이션
   
   ```
   dic = {}
   ```

2.  점화식
   
   ```
    n % 2 == 0
    dic[n // 2 + 1] ** 2 - dic[n // 2 - 1] ** 2
    
    n % 2 == 1
    dic[n // 2 + 1] ** 2 + dic[n // 2] ** 2
   ```

## :black_nib: **Review**

- 재귀도중에 % 1000000007을 취하지 않을시 87번째 피보나치까진 정상적인 정답이 나오지만 88번째부터 알수없게 음수가 나온다 이유는 몰?루
