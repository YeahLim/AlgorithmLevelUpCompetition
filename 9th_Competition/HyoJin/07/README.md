# [백준 - 실버 1] 트럭 (133335)
## ⏰ time
오래걸림

## 📌 Algorithm
구현, 큐

## ⏲️Time Complexity

## 📍 Logic
다리가 비어있으면 트럭을 다리에 올리고 시간 증가시킴
다리에 올라가있는 트럭수랑 다리길이가 같으면 가장 먼저 올라간 트럭 빼고 sum에서 무게 빼기
다리 위에 있는 트럭이 최대하중 초과하지 않으면 트럭을 다리에 올리고 무게 추가 시간 증가
최대하중 초과하면 다리위에 트럭 못올리니까 0을 큐에 추가하고 시간 증가시키기

## ✒️ Review
큐 자체가 생각이 안났다
구현 많이 풀어야될듯