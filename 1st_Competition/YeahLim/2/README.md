# [백준] N과 M (2) (15650번)

## ⏰  **time**
35분

## :pushpin: **Algorithm**
백트래킹

## ⏲️**Time Complexity**
$O(N^2)$

## :round_pushpin: **Logic**
단순 백트래킹 <br>
오름차순이기 때문에 index를 다시 1로 되돌리지 않는다
```
private static void backtracking(int index, int count, StringBuilder sb) {

		if (count == m) {
			System.out.println(sb.toString());
			return;
		}
		
		
		for (int i = index; i <= n; i++) {
			sb.append(i).append(" ");
			backtracking(i + 1, count + 1, sb);
			sb.delete(sb.length() - 2, sb.length());
		}
	}
```

## :black_nib: **Review**
- 엄청난 재활문제였다... 어떻게 index와 i의 자리를 헷갈리는지.... 초보적인 실수를 하였다... 디버깅에 꽤 시간이 걸렸다
