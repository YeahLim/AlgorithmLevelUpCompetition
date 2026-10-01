def solution(topping):
    answer = 0
    left = set()
    right = {}

    for t in topping:
        right[t] = right.get(t, 0) + 1

    for t in topping:
        left.add(t)
        right[t] -= 1

        if right[t] == 0:
            del right[t]

        if len(left) == len(right):
            answer += 1

    return answer