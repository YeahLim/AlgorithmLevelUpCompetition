# [백준 - 실버 3] 영단어 암기는 괴로워 (20920 번)

## ⏰  **time**

1시간 이상

## :pushpin: **Algorithm**

- 자료구조
- 문자열
- 정렬
- 해시를 사용한 집합과 맵
- 트리를 사용한 집합과 맵

## ⏲️**Time Complexity**

$O(NlogN)$

## :round_pushpin: **Logic**

- if len(word) >= M:을 통해 단어 길이가 M 이상인 단어만 리스트에 추가. 
- Counter(words)를 사용하여 단어별 등장 횟수를 저장. 
- sorted() 함수를 사용하여 3가지 조건에 맞춰 정렬:
  - word_count[x] → 단어 빈도(내림차순)
  - len(x) → 단어 길이(내림차순)
  - x → 알파벳(오름차순)
- "\n".join(sorted_words)를 사용하여 빠르게 한 번에 출력.

## :black_nib: **Review**

- 정렬의 우선순위를 정리하여 정렬