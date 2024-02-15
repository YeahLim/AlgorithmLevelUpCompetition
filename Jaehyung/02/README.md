# [백준] 신입 사원 (1946번)

## ⏰ **time**

60분

## :pushpin: **Algorithm**

그리디

## ⏲️**Time Complexity**

O(N)

## :round_pushpin: **Logic**##

- ```
  let T = Number(input[0]);
  let line = 1;
  for (let tc = 0; tc < T; tc++) {
    let n = Number(input[line]);
    let arr = [];
    for (let i = line + 1; i <= line + n; i++) {
      let grade = input[i].split(" ").map(Number);
      arr.push(grade);
    }
    arr.sort((a, b) => a[0] - b[0]);
    let cnt = 0;
    let minNum = 1000001;
    for (let [x, y] of arr) {
      if (y < minNum) {
        minNum = y;
        cnt += 1;
      }
    }
    console.log(cnt);
    line += n + 1;
  }
  ```

- 첫 시험 성적 순으로 정렬하고 두 번째 시험 성적을 전에 있는 요소의 성적과 비교하면 된다.

- 직접 전부 비교보다 최솟값 갱신으로 코드를 짰다.

## :black_nib: **Review**

- 문제 이해하는데 시간이 넘 걸렸다

- 코드를 조금이라도 깔끔하게 짜고 싶었다
