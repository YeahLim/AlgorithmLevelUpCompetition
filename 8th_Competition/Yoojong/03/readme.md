# [백준] 수 찾기 (1920)

## ⏰  **time**

15분

## :pushpin: **Algorithm**

자료구조

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
딕셔너리
'''
for i in m_list:
    try:
        print(n_dict[i])
    except:
        print(0)
'''
## :black_nib: **Review**
- binary로 풀어라는 의도가 뻔히 보이지만 그걸 무시하고 dictionary로 풀었다. set으로 하면 더 빨랐을 것 같다.
