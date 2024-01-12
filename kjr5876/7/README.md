# [백준] 평범한 배낭(12865번)

## ⏰ **time**

2시간

## :pushpin: **Algorithm**

dp

## ⏲️**Time Complexity**

## :round_pushpin: **Logic**

1. 먼저 dp용의 빈 배열을 만들어준다 (x축은 총 무게, y축은 총 상품 개수)
   그리고 상품목록을 저장할 배열을 만들어 append 해준다
   그 다음 상품들의 배열을 돌며 dp배열을 다음 규칙으로 고쳐준다.
   현재 상품(i)의 현재 무게(j)의 가치 + 전 상품의 현재 무게 - 현재상품무게의 가치와 현재 무게의 전 상품 중 고른다.
   만약 현재 무게(j)가 현재 상품 무게(상품 배열의 상품 무게)보다 작다면 전 상품의 현재 무게의 값을 그대로 가져온다.

수식으로 나타내면 다음과 같다

```python
knapsack[i][j] = max(현재 물건 가치 + knapsack[이전 물건][현재 가방 무게 - 현재 물건 무게], knapsack[이전 물건][현재 가방 무게])

knapsack[i][j] = max(value + knapsack[i - 1][j - weight], knapsack[i - 1][j])
```

## :black_nib: **Review**

- dp는 역시 진짜 많이해봐야하는것 같다..냅색 알고리즘이라는데 재밌어서 좀 더 풀어봐야겠다.
