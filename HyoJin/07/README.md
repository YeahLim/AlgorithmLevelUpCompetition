# [백준 - 실버4] 제로 (10773)
## ⏰ time
10분

## 📌 Algorithm
스택

## ⏲️Time Complexity

## 📍 Logic
0이면 pop 나머지는 add

## ✒️ Review

마지막에 pop하면서 출력하게되면 배열 사이즈가 바뀌기 때문에 변수로 빼기

지난번부터 이 부분 계속 틀림

헉 이렇게도 됨
```java
for(int n : stack){
    sum += n;
}
		```