# [백준] 회의실 배정 (1931번)

## ⏰ **time**

60분

## :pushpin: **Algorithm**

그리디

## ⏲️**Time Complexity**

O(N)

## :round_pushpin: **Logic**

- ```
  let n = Number(input[0]);
  let arr = [];
  for (let i = 1; i <= n; i++) arr.push(input[i].split(" ").map(Number));
  arr.sort((a, b) => {
    if (a[1] != b[1]) return a[1] - b[1];
    else return a[0] - b[0];
  });
  
  let cnt = 1,
    cur = 0;
  for (let i = 1; i < n; i++) {
    if (arr[cur][1] <= arr[i][0]) {
      cur = i;
      cnt += 1;
    }
  }
  console.log(cnt);
  ```

## :black_nib: **Review**

- 
