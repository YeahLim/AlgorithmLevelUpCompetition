def solution(storey):
    answer = 0

    while storey:
        r = storey % 10
    
        if r > 5:
            answer = answer + (10 - r)
            storey = storey + 10
        elif r < 5:
            answer = answer + r
        else:
            if (storey // 10) % 10 > 4:
                storey = storey + 10
            answer = answer + r
        storey = storey // 10

    return answer
