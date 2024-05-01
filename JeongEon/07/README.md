# [SWEA - D3️⃣] 18662. 등차수열 만들기
 
## ⏰  **time**

20분

## :pushpin: **Algorithm**

수학

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. 등차 수열은 y - x = z - y를 성립해야 한다.
   - x = 2y - z
   - y = (x + z) / 2
   - z = 2y - x
```cpp
		result.push_back(abs((2 * b - c) - a));
		result.push_back(abs((double) (a + c) / 2 - b));
		result.push_back(abs((2 * b - a) - c));
```

## :black_nib: **Review**
- 소수점 첫째자리까지 출력안해서 틀렸다..!
- c++ 소수점 출력 방식
  cout << fixed;
  cout.precision(원하는 길이);
