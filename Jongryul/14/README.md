# [백준 - 골드 4] 빙산 (2573번)

## ⏰ **time**

30분

## :pushpin: **Algorithm**

bfs

## :round_pushpin: **Logic**

1. 나는 먼저 몇덩이인지 확인하는 함수를 만들어 줬다. 기존 bfs하던 방식으로 v배열과 q 배열을 만들어 준다. 그리고 몇덩이인지 셀 cnt도 0으로 선언한다.
2. 배열을 돌면서 arr이 0이 아니고 v가 0이면 다 q에 넣어준다. 그리고 최종 cnt값을 리턴한다.
3. 다음이 빙산을 녹일 함수인데 바로바로 녹여버리면 옆의 빙산이 0이 됐을 때 옆의 빙산을 녹일 숫자가 커져버리면 안되니 일단 빙산위치와 녹일 크기를 배열에 담는다.
4. 위 두 함수를 실행하고 리스트대로 녹여주는데 녹인 숫자가 0보다 작아져버리면 몇덩이인지 셀때 문제가 있을것 같아 0과 녹인값 둘 중 큰값으로 바꿔주기로 했다.
5. 다 녹을때까지 분리되지 않으면 0을 출력하라 했으니 그 조건에 맞게 while문 짜주고 rlt(몇덩이인지)가 0 보다 크면 몇년걸렸는지, 아니면 0을 출력해준다.

## :black_nib: **Review**

- 시간초과나 메모리 초과날줄 알았는데 원트에 성공해서 놀랬다ㅋㅋ 이번엔 실수안한게 조건 확인을 잘 했고 설계를 좀 잘했던것 같다.