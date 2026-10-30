from collections import Counter

def solution(str1, str2):
    str1 = str1.lower()
    str2 = str2.lower()

    s1 = [str1[i:i + 2] for i in range(len(str1) - 1) if str1[i:i + 2].isalpha()]
    s2 = [str2[i:i + 2] for i in range(len(str2) - 1) if str2[i:i + 2].isalpha()]

    c1 = Counter(s1)
    c2 = Counter(s2)

    inter = sum((c1 & c2).values())
    union = sum((c1 | c2).values())

    if union == 0:
        return 65536
    return int(inter / union * 65536)