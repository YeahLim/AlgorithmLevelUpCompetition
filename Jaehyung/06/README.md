# [백준] 단어정렬 (1181번)

## ⏰ **time**

45분

## :pushpin: **Algorithm**

정렬

## ⏲️**Time Complexity**

O(NlogN)

## :round_pushpin: **Logic**

- 문자열 길이와 문자열 순서로 정렬하는 문제

- 중복 없다고 해서 세트 사용해서 없애기

- ```
  let arr = [];
  for (i = 1; i <= N; i++) {
    arr.push(input[i]);
  }
  let data = [...new Set(arr)];
  
  function compare(a, b) {
    if (a.length != b.length) return a.length - b.length;
    else {
      if (a > b) return 1;
      else if (a == b) return 0;
      else return -1;
    }
  }
  ```

## :black_nib: **Review**

- 출력 오류라길래 출력 쪽만 봤는데 그냥 함수 선언에서 틀렸던 것이였다 !!
