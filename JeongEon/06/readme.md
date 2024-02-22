# [백준] 문자열 폭발 (9935번)

## ⏰  **time**

40분

## :pushpin: **Algorithm**

문자열

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 폭발 문자열의 마지막 문자가 등장하면 입력 문자열에서 비교
```
    for (int i = 0; i < input.size(); i++) {
        result.push_back(input[i]);
        if (result.back() == bomb.back()) {
            if (result.size() >= bomb.size()) {
                if (result.substr(result.size() - bomb.size(), bomb.size()) == bomb) {
                    result.erase(result.size() - bomb.size(), bomb.size());
                }
            }
        }
    }
```


## :black_nib: **Review**

- string의 함수
