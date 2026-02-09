# [백준] 헌내기는 친구가 필요해 (21736)

## ⏰  **time**

35분

## :pushpin: **Algorithm**

BFS

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**


## :black_nib: **Review**
- `count`를 `Node class`의 지역변수로 두어서, 전체 `count`가 채워지지 않는 실수를 해서 오래걸렸다. 단순한 문젠데 다음부터는 `count` 변수를 둘 때, 지역변수로 둘지 전역으로 둘지 신중해야겠다.
- `answer` 변수는 int형인데도 불구하고 `System.out.println(answer == 0 ? "TT" : answer);` 코드가 오류가 안난다는 게 신기했다. 생각해보니 `answer = answer == 0 ? "TT" : answer;` 이 코드처럼 직접 변수에 넣는 게 아니라 가능하구나!
