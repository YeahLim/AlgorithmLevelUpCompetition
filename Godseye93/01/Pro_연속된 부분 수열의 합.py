def solution(sequence, k):
    n = len(sequence)
    left = 0
    current_sum = 0
    best_len = float('inf')
    answer = [0, 0]

    for right in range(n):
        current_sum += sequence[right]

        while current_sum > k and left <= right:
            current_sum -= sequence[left]
            left += 1

        if current_sum == k:
            cur_len = right - left + 1
            if cur_len < best_len:
                best_len = cur_len
                answer = [left, right]

    return answer