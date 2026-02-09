# [백준 - 골드 5] 한글 LCS (15482)
 
## ⏰  **time**
10분

## :pushpin: **Algorithm**
DP

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**\
- LCS는 대표적인 DP 문제이며 점화식은 다음과 같다.
- 부분최장길이[i][j] = max(부분최장길이[i][j-1],부분최장길이[i-1][j])
- 만약 현재 문자와 비교 문자가 같다면
- 부분최장길이[i][j] = max(부분최장길이[i-1][j-1] + 1,부분최장길이[i][j])

## :black_nib: **Review**
- LCS가 나오면 DP를 바로 생각하자