# [백준] N과 M (4) (15652)

## ⏰  **time**

30분

## :pushpin: **Algorithm**

백트래킹

## ⏲️**Time Complexity**

$O(N^N)$

## :round_pushpin: **Logic**
- **(dfs)** 처음에는 모든 수열을 구한 후, 비내림차순인 경우를 필터로 걸러주려고 했다. 
    - 하지만 비내림차순을 다시 걸러주는 것은 너무 비효율적
- **(Backtracking)** `i`를 `index`값으로 그대로 가져와주면, 중복이 가능한 비내림차순이 된다
    
    ```
        private static void permutation(int index, int count, int[] array) {

            (중략...)

            for (int i = index; i <= N; i++) {
                array[count] = i;
                permutation(i, count + 1, array);
            }
    ```

## :black_nib: **Review**
- `array` 객체를 계속 `answer`에 추가해줬는데, 주소값이 같은 객체라 계속 같은 수열이 출력됐다.
    - `array.clone()`으로 해결
    - 아니면 데이터를 저장하지 않고 바로 출력해도 되겠다.
- 이런 문제에서 정렬 문제 관련을 걸러주지않고, 충분히 `backtracking`으로 풀 수 있다는 점 명심!