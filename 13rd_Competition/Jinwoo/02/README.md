# [백준 - 실버 3] 꿀 아르바이트 (12847 번)

## ⏰  **time**

20분

## :pushpin: **Algorithm**

누적 합
슬라이딩 윈도우

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 전체 일 수 N에서 일 할 수있는 일수 M을 입력받고
- 다음 줄에 각각의 일급을 입력 받습니다.
- 그래서 연속으로 M일 일했을 때 받을수 있는 최대 일급 값을 구하는 문제 입니다.
- 각 일수의 일급을 누적합 한 리스트를 만들어주고
- 그 리스트에서 누적합 리스트 인덱스 M+j - 인덱스 j를 하게되면 M일동안 일한 일급의 합을 구할 수 있습니다.
- 이것을 결과 리스트에 저장한 후 최댓값을 출력하면 됩니다.

## :black_nib: **Review**

- 누적합을 이용하여 반복문을 돌려 M일의 일급 합을 구하지 않고 누적합을 빼서 좀 더 효울적인 풀이를 할 수 있었습니다.