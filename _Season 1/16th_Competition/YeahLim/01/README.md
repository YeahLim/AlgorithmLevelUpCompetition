# [백준] 태상이의 훈련소 생활 (19951)
 
## ⏰  **time**

40분

## :pushpin: **Algorithm**

누적합

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. a부터 b까지의 최종적으로 더해야하는 `height`를 구하는 법
    - 단순 for문으로 돌면 시간초과가 난다.
    - 그래서 누적합으로 $O(N)$ 의 시간복잡도로 끝내야 한다.
    - 따라서 `a`에 `height`를 추가해주고 `b+1` 인덱스에 `height`를 빼준다.
    - 그러면 누적합으로 앞에서 차례로 더해줄때 `a`에서 `b`까지만 `height`가 더해진다. 
    ```
        heightBounds[a] += height;
        heightBounds[b+1] -= height;
    ```
2. 누적합을 이용해 `heightBounds`를 구한다
    ```
        heightBounds[i] += heightBounds[i-1];
    ```
3. 2번에서 구한 `heightBounds`를 통해 기존의 `heights`에 각각 더해준다. 
    ```
        heights[i] += heightBounds[i];
    ```

## :black_nib: **Review**
- 특정 부분에만 더하는 법을 누적합으로 구하는 법을 배웠다. 굿!