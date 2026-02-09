# [백준] A > B (16953번)

## ⏰ **time**

1시간

## :pushpin: **Algorithm**

탐욕

## ⏲️**Time Complexity**

O(N)

## :round_pushpin: **Logic**

- ```
  let [A, B] = input[0].split(" ").map(Number);
  
  let cnt = 0;
  while (B > A) {
    if (B % 2 == 0) {
      B = B / 2;
      cnt += 1;
    } else if (B % 10 == 1) {
      B = parseInt(B / 10);
      cnt += 1;
    } else {
      cnt = -1;
      break;
    }
  }
  
  console.log(B === A ? cnt + 1 : -1);
  ```

## :black_nib: **Review**

- 아이디어 접근은 비교적 빨리 했는데
- 구현에서 시간을 많이 잡아먹었다
- 차분하게 집중해서 생각해야 할 듯
