def solution(schedules, timelogs, startday):
    answer = 0
    n = len(schedules)

    for i in range(n):
        desired = schedules[i]
        is_good = True
        day = startday

        for log in timelogs[i]:
            if day == 6 or day == 7:
                day += 1
                if day == 8:
                    day = 1
                continue

            des_h = desired // 100
            des_m = desired % 100
            limit_m = des_m + 10
            limit_h = des_h
            if limit_m >= 60:
                limit_m -= 60
                limit_h += 1
            limit_time = limit_h * 100 + limit_m

            if log > limit_time:
                is_good = False
                break

            day += 1
            if day == 8:
                day = 1

        if is_good:
            answer += 1

    return answer