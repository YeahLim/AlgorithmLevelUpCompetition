# [백준] 좌표 압축 (18870번)

## ⏰ **time**

15분

## :pushpin: **Algorithm**

정렬

## ⏲️**Time Complexity**

O(NlogN)

## :round_pushpin: **Logic**

- 받은 데이터에서 중복을 없앤 배열을 하나 더 만들어서 정렬

- 원소의 인덱스가 배열에서 더 작은 숫자의 개수가 됨

- 딕셔너리 만들어서 정답 출력

- ```
  let data = [...new Set(arr)]
  
  data.sort(function(a,b) {return a-b})
  let dict = {}
  for (let i=0; i<data.length; i++) {
    dict[data[i]] = i
  }
  
  answer = ""
  for (i=0; i<N; i++){
    answer += dict[arr[i]] + " "
  }
  
  console.log(answer)
  ```

## :black_nib: **Review**

- 알고 제밋다


