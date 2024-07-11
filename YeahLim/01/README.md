# [백준 - 골드 5] Moo 게임 (5904)
 
## ⏰  **time**

시초

## :pushpin: **Algorithm**

재귀

## ⏲️**Time Complexity**

$O(logN)$

## :round_pushpin: **Logic**

- 앞, 중간, 뒤 3파트로 나누어서 재귀를 돌렸다.
- 앞과 뒤는 똑같은 수열로 구성되어있고, 중간은 'm' + 'o' * `count + 2`로 이루어져있다.
- 따라서 최초로 `N`에 가장 가까운 길이의 수열을 구한다. (`N`보다 작은 길이 중에서)
- 구한 수열 중에 `N` 위치의 문자를 찾아야하는데, 앞, 중간, 뒤 중 `N`이 어디에 위치하냐에 따라 다르게 처리한다.
    - 앞 : 재귀를 돌려서 또 그 앞파트 안에서 앞, 중간, 뒤 중 어디 위치하는지 찾는다.
        ```
            return searchLetter(N, count - 1, prevLength);
        ```
    - 중간 : 중간 중 맨 앞 인덱스인 경우 'm', 그 외의 경우 'o'를 반환한다.
        ```
            else if (N == prevLength + 1) {
                return 'm';
            }
            else if (N <= prevLength + count + 3) {
                return 'o';
            }
        ```
    - 뒤 : 뒷파트는 앞파트와 일치하기 때문에 앞파트에서처럼 찾을 수 있도록 길이를 줄여 재귀를 돌린다.
        ```
            return searchLetter(N - (count + 3) - prevLength, count - 1, prevLength);
        ```

## :black_nib: **Review**
- 다른 재귀도 풀어보자