# [백준] 박터뜨리기 (19939번)

## ⏰ **time**

20분

## :pushpin: **Algorithm**

그리디

## ⏲️**Time Complexity**

O(N)

## :round_pushpin: **Logic**

- ```
  let n = Number(input[0].split(" ")[0]);
  let k = Number(input[0].split(" ")[1]);
  
  let summary = 0;
  for (let i = 1; i < k + 1; i++) {
    summary += i;
  }
  if (summary > n) {
    console.log(-1);
  } else {
    n -= summary;
    if (n % k == 0) console.log(k - 1);
    else console.log(k);
  }
  ```

## :black_nib: **Review**

- 
