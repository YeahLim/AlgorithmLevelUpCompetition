# [백준 - 실버 4] 대칭 차집합 (1269 번)

## ⏰  **time**

15 분

## :pushpin: **Algorithm**

- 자료 구조
- 해시를 사용한 집합과 맵
- 트리를 사용한 집합과 맵

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 숫자 원소 A집합과 B집합을 입력받아 각각의 대칭 차집합을 구하는 문제입니다.
- 차 집합을 구하기 위해서는 A집합과 B 집합을 만든 후 대칭 차 집합 이므로 A - B, B - A를 해준 다음
- 각 리스트의 길이를 더해주어 대칭 차집합을 구할 수 있습니다.

## :black_nib: **Review**

- 단순히 집합 리스트를 구현하여 대칭 차집합을 구하면 되는 문제 이지만.. 차집합을 구하는 과정이 궁금했습니다.
- 파이썬에서 A - B는 A.difference(B) 매서드를 호출하는 것과 동일하게 동작한다고 합니다.
- 이는 집합 A에서 집합 B에 포함된 원소들을 제거하는것으로 차집합의 로직과 동일합니다.
- 이러한 difference는 이렇게 구현이 된다고 합니다.

```commandline

# difference 연산을 직접 구현
def custom_difference(A, B):
    result = set()  # 결과를 저장할 빈 집합 생성
    for element in A:  # 집합 A의 원소를 하나씩 순회
        if element not in B:  # 원소가 B에 없으면
            result.add(element)  # 결과 집합에 추가
    return result  # 차집합 반환
```
- 집합 A의 리스트를 하나씩 순회하여 해당 루프중 원소가 B에 없다면 결과 집합에 추가하는 형식으로 이루어 지는것을 알 수 있었습니다.
