# [백준 - 실버1] 하노이 탑(1914)

## ⏰  **time**

1시간

## :pushpin: **Algorithm**

DP

## ⏲️**Time Complexity**

$O(2^N)$

## :round_pushpin: **Logic**
1. 수도코드

```java
    하노이탑움직이기(시작위치, 목표위치, 남은 위치, 옮기려는 탑의 높이){
        if(옮기려는 탑의 높이가 1이라면){
        //탑의 높이가 1이므로 옮길 수 있게된다.
        시작 위치에서 탑(원판)을 목표위치로 옮긴다.
        }else{
        //시작 위치에서 맨 밑의 원판위의 모든 탑을 남은 위치로 옮긴다.
        하노이탑움직이기(시작위치, 남은위치, 목표위치,옮기려는 탑의 높이-1)
        시작 위치에서 탑(맨 밑의 원판)을 목표위치로 옮긴다.
        //남은 위치의 탑을 모두 목표 위치로 옮긴다.
        하노이탑움직이기(남은위치, 목표위치, 시작위치,옮기려는 탑의 높이-1)
        }
        }
```


## :black_nib: **Review**
- 한번에 움직이지 못한다는 것은 로직상 한번에 여러개를 움직일 수 있게 만들 수 있기 때문에 DP의 가능성을 생각해보자.
- 어떻게 전체다 옮기지??라고 생각할 때 일부분만 한번 옮겨보자. DP적인 생각을 하는데 큰 도움이 된다.
- 점화식을 만들어 보기 위해 경우의 수는 5번까지 해본다. 가끔 n-3까지 쓰는 경우가 있다.