# [백준] 별 찍기 -2 (2439번)

## ⏰  **time**

2분

## :pushpin: **Algorithm**

구현

## ⏲️**Time Complexity**

$O(1)$

## :round_pushpin: **Logic**

- 별찍는 줄 개수를 입력받을 변수 N를 지정한다. int(sys.stdin.readline())을 이용하여 정수를 입력받는다.
- 먼저 줄을 찍을 반복문을 만들어 for문을 통하여 초기값이 0인 i가 N까지 for문을 반복시킨다.
- 이 반복문 안에서 공백을 찍을 개수의 반복문을 초기값 j로 N-i-1만큼 반복시킨다.(입력받은 줄 개수보다 하나가 적게 출력해야되고, i의 초기값이 0이므로 -1 해준다.)
- 그리고 별을 찍을 k반복문을 초기값 k=0로 i+1만큼 반복시킨다.(i의 초기값이 0이므로 +1 해준다.)
- 이 반복문 속에서 공백과 별을 반복하여 출력하고 end=''를 통해 공백과 별을 이어서 출력하게 해준다.
- j, k 반복문이 종료되면 i반복문에서 다음줄로 넘어갈 수 있도록 줄바꿈을 해준다.
- i 반복문이 종료되면 피라미드 별찍기 출력 완료.

## :black_nib: **Review**

- 이 문제풀이에서 생각해야할 점은 별찍는 줄 개수의 반복문 하나와 그 줄에서 찍을 별의 개수 반복문과 공백을 찍을 반복문 총 3개의 반복문을 생각하면 된다.
- 문제풀이중 나는 반복문 3개를 활용하여 문제풀이를 했지만 반복문 2개에 if문을 사용하여 문제풀이도 가능했을거같다.