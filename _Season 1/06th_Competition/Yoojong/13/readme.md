# [백준] 좌표 정렬하기 (11650번🩶5️⃣)

## ⏰  **time**

20분

## :pushpin: **Algorithm**

정렬

## ⏲️**Time Complexity**

$O(nlogn)$

## :round_pushpin: **Logic**

- lambda 이용하여 x[0] 정렬이후 x[1]정렬
```
num_list = sorted(num_list, key = lambda x : ( x[0],x[1] ))

```


## :black_nib: **Review**

- 처음에 x값이 중복되는게 싫어서 dictionary를 사용하였음. value 부분을 list로 담았다.
- 그러나, 출력을 하려고 보니 for문을 두 번 써야해서 시간초과가 났다..
- dictionary -> 중복은 어쩔 수 없지만 list로 바꿔서 푸니 바로 풀렸다! 
