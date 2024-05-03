# [SWEA] 소득불균형 (10505번 D3️⃣)

## ⏰  **time**

7분

## :pushpin: **Algorithm**

수학

## ⏲️**Time Complexity**

$O(1)$

## :round_pushpin: **Logic**
1. 평균 이하인 사람 수 세
```cpp
  for (int j = 0; j < vec.size(); j++) {
  		if (ave >= vec[j]) {
  			cnt++;
  		}
  }
```

## :black_nib: **Review**
- 
