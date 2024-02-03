# [백준] 구간 합 구하기 5 (11660번)

## ⏰ **time**

1시간

## :pushpin: **Algorithm**

구간합 알고리즘

## ⏲️**Time Complexity**

$O(1)$

## :round_pushpin: **Logic**

- 이것도 구간합을 먼저 미리 다 구해준다.
  구간합을 더하는 방법은 해당 xy 배열에서 위 행, 전 열 구간합을 더해준 뒤 x-1, y-1행은 겹쳐서 더한녀석이라 빼준다.
  이 구간합에서도 똑같이 가장 끝점(x2, y2)에서 x1-1, y2와 x2, y1-1 을 빼준 후 x1-1, y1-1녀석은 더해준다.
  참고 링크 : https://chanhuiseok.github.io/posts/baek-19/

## :black_nib: **Review**

- 이차배열 구간합이다. 구하는 방식을 어떻게 구현해야할지 몰라서 많이 헤맸다.
