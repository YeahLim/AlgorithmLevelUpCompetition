# [백준] 트리 순회 (1991번)

## ⏰  **time**
50분

## :pushpin: **Algorithm**
트리, 재귀

## ⏲️**Time Complexity**
$O(N)$

## :round_pushpin: **Logic**
- 트리를 클래스로 표현하는데, 이때 필드도 클래스인 것이 핵심이다. 따라서 인스턴스를 만드는 과정이 조금 복잡했다.
  ```
  class Node {
  	char value;
  	Node left, right;
  	
  	public Node (char value) {
  		this.value = value;
  		this.left = null;
  		this.right = null;
  	}
  }
```

## :black_nib: **Review**
- 전위, 중위, 후위 문제의 기본 정석 문제
