def solution(n, words):
    used = set()
    used.add(words[0])

    for i in range(1, len(words)):
        prev = words[i - 1]
        curr = words[i]

        if prev[-1] != curr[0] or curr in used:
            person = (i % n) + 1
            turn = (i // n) + 1
            return [person, turn]

        used.add(curr)

    return [0, 0]