# [백준 - 실버5] 좌표 정렬하기 (11650번)
## ⏰ time


## 📌 Algorithm
구현

## ⏲️Time Complexity

## 📍 Logic


## ✒️ Review

람다사용 시
```java
        Arrays.sort(nodes, (e1, e2)->{
            if(e1.x == e2.x){
                return e1.y - e2.y;
            }
            return e1.x - e2.x;
        });
```