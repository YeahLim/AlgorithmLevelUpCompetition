# [백준] 나이순 정렬 (10814번)

## ⏰ **time**

30분

## :pushpin: **Algorithm**

정렬

## ⏲️**Time Complexity**

O(NlogN)

## :round_pushpin: **Logic**

- 나이 기준으로 정렬하고 같으면 등록 순으로

- JS의 sort는 기본적으로 stable

- ```
  let N = Number(input[0]);
  
  let data = [];
  for (let i = 1; i <= N; i++) {
    let age = Number(input[i].split(" ")[0]);
    let name = input[i].split(" ")[1];
    data.push([age, name]);
  }
  
  data.sort((a, b) => a[0] - b[0]);
  
  answer = "";
  for (let j = 0; j < N; j++) {
    answer += data[j][0] + " " + data[j][1] + "\n";
  }
  console.log(answer);
  
  ```

## :black_nib: **Review**

- 단순 출력 실수로 시간 오래 잡아먹었다
- 확실하게 확인하자..
