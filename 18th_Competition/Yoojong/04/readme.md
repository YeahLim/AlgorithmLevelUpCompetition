# [백준 - 골드 5] 단어 만들기 (1148)
 
## ⏰  **time**
1시간

## :pushpin: **Algorithm**
구현 문자열

## ⏲️**Time Complexity**

$O(n^2)$

## :round_pushpin: **Logic**
```python
for i in check_list:
    dic = {}
    for j in i:
        dic[j] = 0
        for k in word_list:
            if j in k:
                iff = True
                for l in k:
                    if k.count(l) > i.count(l):
                        iff = False
                        break
```

## :black_nib: **Review**
- 문자열 구현이다. 
