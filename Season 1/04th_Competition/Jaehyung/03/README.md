# [백준] 주유소 (13305번)

## ⏰ **time**

60분

## :pushpin: **Algorithm**

그리디

## ⏲️**Time Complexity**

O(N)

## :round_pushpin: **Logic**

- ```
  let N = Number(input[0]);
  let distance = input[1].split(" ").map(Number);
  let price = input[2].split(" ").map(Number);
  let answer = BigInt(0);
  for (let i = N - 2; i >= 0; i--) {
    let minNum = 1000000000;
    for (let j = 0; j <= i; j++) {
      if (price[j] < minNum) {
        minNum = price[j];
      }
    }
    answer += BigInt(minNum) * BigInt(distance[i]);
  }
  console.log(String(answer));
  ```

- JS에서 큰 숫자를 다룰 때 BigInt()를 사용해야 한다

- 역순으로 진행시킨 후 비용 중 최솟값을 매번 찾아 미리 주유해놓는 방식

## :black_nib: **Review**

- 해당 방법보다 좋은 방법이 있을 것 같다
