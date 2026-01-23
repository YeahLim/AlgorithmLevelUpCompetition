# [백준] 나는야 포켓몬 마스터 이다솜 (1620)

## ⏰  **time**
40분

## :pushpin: **Algorithm**
자료 구조
## ⏲️**Time Complexity**

$O(N+M)$

## :round_pushpin: **Logic**
- 숫자인지 아닌지를 판별하기 위해 try except를 사용
- 하지만 .isdigit() 있는줄 몰랐다.
    ```
for i in check:
    try:
        #int
        i = int(i)
        print(p_i[i-1])
    except ValueError:
        #str
        print(p_k[i] + 1)
    ```

## :black_nib: **Review**
- 리스트로만 했다가 O(N^2) 나오는 거 같아서 딕셔너리로 바꿈
- 딕셔너리도 key에선 value를 찾는건 쉽지만 value에서 key로도 찾아야 하기에 시간이 너무 오래 걸림
- 고려하여, value값이 key로 가는 dictionary를 하나 더 만들었다
- dictionary두개 인것 보다 dictionary하나로 그냥 value값을 key로 하는 걸 추가하면 됐었다..
- 그리고 try except도 좋지만... .isdigit() 사용하자
