# [백준] 수들의 합 2 (2003번)

## ⏰  **time**
35분

## :pushpin: **Algorithm**
투포인터

## ⏲️**Time Complexity**
$O(N^2)$

## :round_pushpin: **Logic**
-  M보다 크거나 같을 때 오른쪽++
```
  if (sum <= M) {
    right++;
    if (right != N) {
      sum += array[right];
    }
  }
```
- M보다 작을때 왼쪽++
```
  else if (sum > M) {
    sum -= array[left];  // <- 먼저 빼주고 
    left++;		           // <- 인덱스 수정해야한다
  }
```

## :black_nib: **Review**
- 뺏셈할때는 인덱스가 변동이 되면 곤란하다
- 인덱스 초과가 될때는 while문에서 따로 빼서 해결하는 게 아니라, while문안에 if문을 두고 해결해야한다
