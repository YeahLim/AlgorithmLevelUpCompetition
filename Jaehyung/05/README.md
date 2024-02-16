# [백준] 풍선 맞추기 (11509번)

## ⏰ **time**

60분

## :pushpin: **Algorithm**

그리디

## ⏲️**Time Complexity**

O(N)

## :round_pushpin: **Logic**

- 화살의 위치를 기록하는 배열을 만들어서 해결

- 높이로 주어진 값을 인덱스로 활용하여 배열 해당 인덱스에 화살이 있다면 높이 -1 을 하고 저장

- 없다면 화살 또 쏘고 해당 인덱스 화살 저장

- ```
  let n = Number(input[0]);
  let high = input[1].split(" ").map(Number);
  let result = 0
  let arrow = new Array(1000001).fill(0)
  for (h of high) {
    if (arrow[h] > 0) {
      arrow[h] -= 1
      arrow[h-1] += 1
    }
    else {
      arrow[h-1] += 1
      result += 1
    }
  }
  console.log(result)
  ```

## :black_nib: **Review**

- O(N^2) 방법 밖에 생각 안나서 시간을 오래썼다 ㅠ
- 시간 지나서 다시 풀면 풀 수 있을런지
