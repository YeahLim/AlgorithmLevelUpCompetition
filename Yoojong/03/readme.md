# [백준] 수학은 비대면강의입니다 (19532번🩶5️⃣)

## ⏰  **time**

10분

## :pushpin: **Algorithm**

수학, 브루트포스 알고리즘

## ⏲️**Time Complexity**

$O(1)$

## :round_pushpin: **Logic**

- 투 포인터: start와 end를 1부터 시작해서 움직이며 더하고 빼며 N이 되는지 확인한다.
```
a, b, c, d, e, f = map(int, input().split())

print((c*e-b*f)//(a*e-b*d), (a*f-d*c)//(a*e-b*d))
```


## :black_nib: **Review**

- 처음에 입력을 넣을 때 d 랑 e 의 순서가 잘못되어 애먹었다.
