def solution(name, yearning, photo):
    score_dict = dict(zip(name, yearning))

    answer = []
    for p in photo:
        total = 0
        for person in p:
            total += score_dict.get(person, 0)
        answer.append(total)

    return answer