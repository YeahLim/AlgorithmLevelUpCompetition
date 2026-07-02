def solution(brown, yellow):
    for i in range(1, int(yellow ** 0.5) + 1):
        if yellow % i == 0:
            a, b = i, yellow // i  # a <= b

            width = b + 2
            height = a + 2

            if 2 * (width + height) - 4 == brown:
                return [width, height]

    return []