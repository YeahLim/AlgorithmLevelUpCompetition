# [백준] 회사에 있는 사람 (7785)

## ⏰  **time**

20분

## :pushpin: **Algorithm**
자료 구조
## ⏲️**Time Complexity**

$O(NlogN)$

## :round_pushpin: **Logic**
- dictionary로 자료를 입력 받은 다음 sort해서 출력
    ```
for _ in range(n):
    name, status = sys.stdin.readline().split()
    office[name] = status

for k in office.keys():
    if office[k]=='enter':
        e_office.append(k)

e_office = sorted(e_office, reverse=True)
    ```

## :black_nib: **Review**
- 새로운 리스트에다가 담아서 sort를 했는데 앞으론 이렇게 하지 말자
- print("\n".join(sorted(office.keys(), reverse=True))) 이러면 메모리 낭비안됨!
