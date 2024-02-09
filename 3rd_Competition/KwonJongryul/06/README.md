# [백준] 포도주 시식 (2156번)

## ⏰ **time**

1시간

## :pushpin: **Algorithm**

DP

## ⏲️**Time Complexity**

$O(n)$

## :round_pushpin: **Logic**

- dp의 0과 1은 고정으로 들어가고, 2는 0+1과 0+2, 1+2중에 가장 큰 값을 넣어주면 된다.
  그 다음 3부터는 다음과 같이 하나를 건너뛰고 더했을때를 포함하여 전배열 + 전전전dp, 현배열 + 전전dp를 더했을때 가장 큰 값을 넣어준다.
  ```
  dp[i] = max(arr[i] + arr[i-1] + dp[i-3], dp[i-1], dp[i-2] + arr[i])
  ```

## :black_nib: **Review**

- 거의 다 풀었는데 디테일이 많이 부족해서 못풀었던 문제....반례를 생각을 못했다
  참고링크 : https://hijkl2e.tistory.com/90
