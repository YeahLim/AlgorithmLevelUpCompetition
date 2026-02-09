# [SWEA - D3️⃣] 모음이 보이지 않는 사람 (4406)
 
## ⏰  **time**

3분

## :pushpin: **Algorithm**

문자열

## ⏲️**Time Complexity**

$O(N^T)$

## :round_pushpin: **Logic**
1. 'a', 'e', 'i', 'o', 'u'일 때는 결과값에 넣지 않는다.
```cpp
        for (int i = 0; i < input.length(); i++) {
            if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u') {
                continue;
            }
            result += input[i];
        }
```

## :black_nib: **Review**
- 
