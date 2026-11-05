def solution(s):
    pair = {'}': '{', ')': '(', ']': '['}
    answer = 0

    for i in range(len(s)):
        rotated = s[i:] + s[:i]
        stack = []

        for ch in rotated:
            if ch in pair:
                if not stack or stack.pop() != pair[ch]:
                    break
            else:
                stack.append(ch)
        else:
            if not stack:
                answer += 1

    return answer