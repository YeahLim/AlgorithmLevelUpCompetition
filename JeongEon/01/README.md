# \[백준 - 실버 3] 19637. IF문 좀 대신 써줘

## ⏰  **time**

15분

## \:pushpin: **Algorithm**

이진 탐색 (Binary Search)

## ⏲️**Time Complexity**

* 전처리: $O(a)$
* 질의 $b$개 × 탐색 $O(\log a)$
* 전체: $O(a + b \log a)$

## \:round\_pushpin: **Logic**

1. **입력 포맷**

   * `a`: 칭호 개수
   * `b`: 캐릭터 수치 수
   * 각 칭호는 `(이름, 상한값)`으로 주어짐
   * 캐릭터 수치마다 상한값 이하 중 가장 처음 등장하는 칭호 출력

2. **주의 사항**

   * **동일한 상한값이 여러 개 있을 수 없다.** → 정렬 안 해도 OK (입력 순 유지)
   * **이진 탐색**을 위해 상한값 기준으로 정렬 필요 (`v[i].first`)

3. **이진 탐색**

   * 입력 수치 `x`에 대해 `v[mid].first >= x` 인 첫 인덱스를 찾음 → `lower_bound`
   * 그 위치의 `v[mid].second`(칭호 이름)을 출력

```cpp
int l = 0, h = a - 1, res = h;
while (l <= h) {
	int mid = (l + h) / 2;
	if (v[mid].first >= x) {
		res = mid;
		h = mid - 1;
	} else {
		l = mid + 1;
	}
}
cout << v[res].second << '\n';
```

## \:black\_nib: **Review**

* `pair<int, string>`로 저장하면 정렬과 탐색이 편하다.
* 이 문제는 상한값이 **오름차순 보장**되므로 **입력 순서 그대로 사용 가능**, 정렬 불필요!
* 탐색 결과를 항상 `result = mid`로 갱신하고 탐색 범위를 줄이는 방식으로 `lower_bound` 구현이 깔끔했다.

## 📡 Link

[https://www.acmicpc.net/problem/19637](https://www.acmicpc.net/problem/19637)
