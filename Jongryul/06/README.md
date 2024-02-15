# [백준 - 골드5] 집합의 표현 (1717번)

## ⏰ **time**

1시간 30분

## :pushpin: **Algorithm**

Union Find

## :round_pushpin: **Logic**

1. 처음으로는 parent 배열을 만든 뒤, find 함수를 만들어 준다.

   ```
   def find(x):
    if parent[x] == x:
        return x

    else:
        parent[x] = find(parent[x])
        return parent[x]

   ```

   여기서 원래는

   ```
   def find(x):
    if parent[x] == x:
        return x

    else:
        return find(parent[x])
   ```

   이렇게 만들었었는데, 이렇게 하니 최종 부모의 값을 리턴하는건 같지만 계속 노드들이 물려지면 find를 호출 할 때마다 모든 트리들을 다 방문해야해서
   시간이 말도안되게 늘어나는건 당연하고 애초에 재귀 제한값을 10000000000으로 줘도 런타임 에러가 났다 ㅋ.ㅋ
   그래서 위의 코드처럼 가장 최고 부모로 계속 갱신하면서 찾아줘야 한다.

   그다음 Union 함수

   ```
   def union(x, y):
    nx = find(x)
    ny = find(y)

    if nx != ny:
        parent[ny] = nx
   ```

   양쪽 부모가 다르면 한쪽의 최고 부모를 다른쪽의 부모로 바꿔준다.

   나머지는 쉬워서 생략

## :black_nib: **Review**

- 유니온 파인드인지 모르고 30분 삽질하고 또 거의 1년만에 유니온 문제 푸는거라 다시 이해하느라 한시간 가까이 날린것 같다..개념만 잡혀있으면 골드5치고는 상당히
  쉬운 문제였다. 쉬운 알고리즘도 꾸준히 다시 봐야하는것 같다.
