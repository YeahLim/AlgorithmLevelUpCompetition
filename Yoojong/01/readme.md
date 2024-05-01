# [백준 - 실버 1] Z (1074 번)

## ⏰  **time**
2시간 반

## :pushpin: **Algorithm**
분할 정복

## ⏲️**Time Complexity**

$O(N=15)$

## :round_pushpin: **Logic**
- 영역을 4사분면으로 계속 4분할로 나눔으로써 마지막 하나를 찾는 과정이다.
```
#제 2사분면
    if r< 2**N and c<2 **N:
        ans += 0

    #제 1사분면
    elif r < 2**N and c>=2**N:
        ans += (2**N) * (2**N)
        c -= (2**N)

    # 제3사분면
    elif r >= 2 ** N and c < 2 ** N:
        ans += (2 ** N) * (2 ** N) * 2
        r -= (2 ** N)

    # 제4사분면
    else:
        ans += (2 ** N) * (2 ** N) * 3
        r -= (2 ** N)
        c -= (2 ** N)

```

## :black_nib: **Review**
- 처음에 영역으로 생각하지 않고 list of list 를 만들어서 처음부터 채우는 방법으로 해봤는데 2시간동안 성과도 없었다.
