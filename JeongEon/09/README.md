# [소프티어 lv.2] 바이러스
 
## ⏰  **time**

26분

## :pushpin: **Algorithm**

수학

## ⏲️**Time Complexity**

$O(1)$

## :round_pushpin: **Logic**

1. $K * P^N$

## :black_nib: **Review**
- 문제 자체는 쉽다. 그치만 계속 틀렸다.
- 이유는 수가 너무 커져서 오버플로우가 나는 거였다.
  
- 해결 방법)
- (a*b)%c = (a%c)*(b%c)
- 분배법칙에 의해 계속 1000000007을 나누어주며 계산한다.
