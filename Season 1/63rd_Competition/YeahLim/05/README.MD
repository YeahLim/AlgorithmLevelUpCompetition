# [프로그래머스 - 레벨 2] 네트워크
 
## ⏰  **time**
25분

## :pushpin: **Algorithm**
BFS

## ⏲️**Time Complexity**
$O(N^2)$

## :round_pushpin: **Logic**

## :black_nib: **Review**
- 인자로 증감값이 들어갈 경우 `exaple(count++)` 증감 전의 값이 들어가진다, 반드시 `count++; example(count)` 증감 후 넣을 것
- `visited`를 int로 구현할때 `0`이 방문하지 않은 경우이므로 헷갈리지 말자
- count가 이미 최대값이므로 `*max_element`를 구할 필요없다. 
    - 그러면 visied도 int가 아니라 boolean으로 구현 가능하군.