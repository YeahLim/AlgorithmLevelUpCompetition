# [백준 - 실버4] 베스트 셀러
 
## ⏰  **time**
10분

## :pushpin: **Algorithm**
정렬

## ⏲️**Time Complexity**
$O(N)$

## :round_pushpin: **Logic**
- dictionary를 value 기준으로 sort

## :black_nib: **Review**
- book = sorted(book_names.items(), key = lambda x : (-x[1], x[0]))
- (-)는 내림차순
