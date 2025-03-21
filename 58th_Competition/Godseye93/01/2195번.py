import sys

input = sys.stdin.readline

def solve_string_copy():
    S = input().strip()
    P = input().strip()
    count = 0
    pos = 0

    while pos < len(P):
        max_match = 0
        for i in range(len(S)):
            match = 0
            while (pos + match < len(P) and
                   i + match < len(S) and
                   P[pos + match] == S[i + match]):
                match += 1
            max_match = max(max_match, match)
        pos += max_match
        count += 1

    return count


print(solve_string_copy())