# [백준] 단어 정렬 (1181번🩶5️⃣)

## ⏰  **time**
20분

## :pushpin: **Algorithm**

문자열, 정렬

## ⏲️**Time Complexity**

$O(NlogN)$

## :round_pushpin: **Logic**

- set 중복 없앤 후 -> list -> sort -> 길이로 sort
```
words = [sys.stdin.readline().rstrip() for i in range(n)]
words = list(set(words))
words = sorted(words)
words = sorted(words, key = lambda x : len(x))
```

## :black_nib: **Review**

- words = sorted(words, key = lambda x : (len(x), sorted(x) ) )
- 이렇게 하면 한방에 될 줄 알았는데 아니었다.
