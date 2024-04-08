# [백준] 단어 나누기 (1251)

## ⏰  **time**
10분

## :pushpin: **Algorithm**
부르트포스

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**
'''
smallest = "z" * len(string)
for i in range(1, len(string) - 1):
    for j in range(i + 1, len(string)):
        s1 = string[:i][::-1]
        s2 = string[i:j][::-1]
        s3 = string[j:][::-1]
        new_string = s1 + s2 + s3
        smallest = min(smallest, new_string)
'''

## :black_nib: **Review**
- .
