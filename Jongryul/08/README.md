# [백준 - 실버 5] 숫자 카드 (10815번)

## ⏰ **time**

40분

## :pushpin: **Algorithm**

이분탐색

## :round_pushpin: **Logic**

1. start, mid, end 인덱스를 만들어 준 뒤 arr[mid]가 구하고자 하는 값보다 크거나 같으면 end값을 mid값으로, 그렇지 않으면 start 값을 mid+1로 대체해준다.
   start가 mid 가 아닌 +1을 더해주는 이유는 크거나 같을 경우를 위에서 이미 처리했기 때문에 mid는 절대 구하는 값이 될 수 없기때문에 mid+1을 해준다.

## :black_nib: **Review**

- 오랜만에 풀어서 역시 좀 헷갈리고 어려웠다. 재미없어도 종종 해야겠다..
