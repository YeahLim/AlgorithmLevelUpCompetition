def solution(word):
    vowels = 'AEIOU'
    answer = 0
    for i, c in enumerate(word):
        answer += vowels.index(c) * (5 ** (5 - i) - 1) // 4 + 1
    return answer