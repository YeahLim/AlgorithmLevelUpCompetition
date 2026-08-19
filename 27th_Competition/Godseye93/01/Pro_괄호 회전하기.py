def solution(s):
    def is_valid(string):
        stack = []
        pair = {')': '(', ']': '[', '}': '{'}

        for char in string:
            if char in '([{':
                stack.append(char)
            else:
                if not stack or stack[-1] != pair[char]:
                    return False
                stack.pop()

        return len(stack) == 0

    answer = 0
    n = len(s)

    if n % 2 == 1:
        return 0

    for i in range(n):
        rotated = s[i:] + s[:i]
        if is_valid(rotated):
            answer += 1

    return answer