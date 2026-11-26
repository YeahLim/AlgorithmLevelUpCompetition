def solution(n, t, m, p):
    digits = "0123456789ABCDEF"

    def to_base(num):
        if num == 0:
            return "0"
        result = []
        while num > 0:
            result.append(digits[num % n])
            num //= n
        return ''.join(reversed(result))

    game = []
    number = 0
    while len(game) < t * m:
        game.extend(to_base(number))
        number += 1

    answer = ''.join(game[p - 1 + i * m] for i in range(t))
    return answer