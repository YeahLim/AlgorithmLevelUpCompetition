# [백준] IOIOI (5525)

## ⏰  **time**

1시간

## :pushpin: **Algorithm**



## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- `i`번째 인덱스가 `O`이고, `i+1`번째 인덱스가 `I`인 경우 `count++`
  - `count가 `N`일 경우, 맨 앞이 `I`인지 확인한다
    - 맞으면, `answer++`
  - `i += 2`

- 아닌 경우
  - `count = 0`로 초기화
  - `i += 1`

## :black_nib: **Review**
- 인덱스 `i`는 길이가 2인 문자열 중 앞 인덱스인데, 뒷 인덱스랑 헷갈려서 이해하는데 오래걸렸다..
- 알고리즘을 할 필요가 없어져서인지 요즘 더 못 푸는 것 같다... 뇌를 잘 돌리자..!
