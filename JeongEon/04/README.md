# [백준] 트리 순회 (1991번 🩶1️⃣)

## ⏰  **time**

2시간

## :pushpin: **Algorithm**

재귀

## ⏲️**Time Complexity**

$O(N^3)$

## :round_pushpin: **Logic**
1. 전위, 후위, 중위 순회
```cpp
void pre(char root) {
    if (root == '.') {
        return;
    }

    cout << root;
    pre(arr[root].left);
    pre(arr[root].right);
}
```

## :black_nib: **Review**
- 
