def solution(elements):
    n = len(elements)
    total_sum = sum(elements)
    unique_sums = set()

    extended = elements + elements

    for start in range(n):
        current_sum = 0
        for length in range(1, n + 1):
            current_sum += extended[start + length - 1]
            unique_sums.add(current_sum)

    return len(unique_sums)