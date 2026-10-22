from collections import Counter

def solution(s):
    s = s.replace("{", "").replace("}", "").split(",")
    count = Counter(s)
    return [int(num) for num, _ in count.most_common()]