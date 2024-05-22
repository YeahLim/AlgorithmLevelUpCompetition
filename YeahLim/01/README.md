# [백준 - 골드 5] AC (5430)
 
## ⏰  **time**
시간초과

## :pushpin: **Algorithm**
구현

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
- 10만이기때문에 `O(N)`으로 해결해야한다. 따라서 실제로 `reverse`와 `delete`를 진행하지 않는다.
- `dir`이 `true`인 경우 앞에서부터 `false`인 경우 뒤에서부터 `arr`을 출력한다.
- `start`인덱스와 `end`인덱스 사이만큼 출력한다.

```java
    boolean dir = true; // true : 앞 / false : 뒤
    int start = 0, end = arr.length - 1;

    for (int i = 0; i < cmd.length(); i++) {
		char curr = cmd.charAt(i);
		
		// reverse
		if (curr == 'R') {
			dir = !dir;
		}
		
		// delete
		else {
			
			if (dir) {
				start++;
			}
			else {
				end--;
			}
			
			// error 발생
			if (start > end + 1) {
				answer.append("error");
				return;	
			}
		}
	}
```

## :black_nib: **Review**
- 길이가 0인 string인 A가 있다고 가정하자. A에 split()를 사용하면 A = " "가 되어버림. 그래서 이것때문에 반례찾느라 어어어어엄청 오래걸렸다...! 매우 주의주의!
