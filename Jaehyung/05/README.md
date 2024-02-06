# [백준] 알고리즘 수업 - 병합 정렬 1 (24060번)

## ⏰ **time**

30분

## :pushpin: **Algorithm**

정렬

## ⏲️**Time Complexity**

O(NlogN)

## :round_pushpin: **Logic**

- x 좌표 끼리 비교하고 같으면 y 끼리 비교하는 함수를 만들어 sort() 에 넣음

- ```
  function compare(a, b) {
    if (a[0] != b[0]) return a[0] - b[0];
    else return a[1] - b[1];
  }
  
  data.sort(compare);
  ```

## :black_nib: **Review**

- 데이터 받는 형태 때문에 시간 잡아먹어서 화난다 ㅠㅠ


