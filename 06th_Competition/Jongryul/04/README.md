# [백준 - 골드 5] LCS (9251번)

## ⏰ **time**

1시간

## :pushpin: **Algorithm**

dp

## ⏲️**Time Complexity**

$O(n^2)$

## :round_pushpin: **Logic**

1. 두 문자를 받아주고, 두 문자의 길이가 같다는 말은 없었으니까 각각 길이를 선언해준다.
2. dp배열을 각 문자의 길이만큼 받아주고, 편의상 문자 앞에x를 추가하여 길이를 하나 늘려준다.
3. 각 문자를 돌면서 같으면 지금까지의 최장 공통수열(dp[i-1][j-1])에서 +1 해준다.
4. 다르다면 a의 전 문자열의 최장수열, b의 전 문자열의 최장수열 중 큰 값으로 dp를 채워준다.

## :black_nib: **Review**

- 문제 설명만 볼땐 어려웠는데 직접 적으면서 해보니 그렇게 어렵지는 않았다. 근데 확실하게 머리에 박힌건 아니라서 비슷한 문제들 더 풀어봐야겠다.
  참고 블로그 : https://velog.io/@emplam27/%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98-%EA%B7%B8%EB%A6%BC%EC%9C%BC%EB%A1%9C-%EC%95%8C%EC%95%84%EB%B3%B4%EB%8A%94-LCS-%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98-Longest-Common-Substring%EC%99%80-Longest-Common-Subsequence
