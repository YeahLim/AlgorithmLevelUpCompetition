import sys
import collections

# input = sys.stdin.readline

eq = input()


def integrate(term):
    term_counter = collections.Counter(term)
    coefficient = term[:len(term) - term_counter["x"]]
    coefficient = int(coefficient) if coefficient else 1

    new_coefficient = str(coefficient // (term_counter["x"] + 1))
    result = new_coefficient + "x" * (term_counter["x"] + 1) if new_coefficient != "1" else "x" * (
            term_counter["x"] + 1)
    return result


start, end = (1, 1) if eq[0] in "+-" else (0, 0)
answer = eq[0] if eq[0] in "+-" else ""

if eq[start] == "0":
    print("W")
else:
    while end < len(eq):
        if eq[end] not in "+-":
            end += 1
        else:
            answer += integrate(eq[start:end]) + eq[end]
            start, end = end + 1, end + 1
    answer += integrate(eq[start:]) + "+W"
    print(answer)
