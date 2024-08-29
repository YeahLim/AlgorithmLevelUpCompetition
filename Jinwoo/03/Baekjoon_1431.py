"""
A와 B의 길이가 다르면, 짧은 것이 먼저 온다.
만약 서로 길이가 같다면, A의 모든 자리수의 합과 B의 모든 자리수의 합을 비교해서 작은 합을 가지는 것이 먼저온다. (숫자인 것만 더한다)
만약 1,2번 둘 조건으로도 비교할 수 없으면, 사전순으로 비교한다. 숫자가 알파벳보다 사전순으로 작다.
"""

n = int(input())
data = []
datasum = dict()
for i in range(n):
    a = input()
    temp = 0
    data.append(a)

    for c in a:
        if c in "123456789":
            temp += int(c)
    datasum[a] = temp

data.sort(key = lambda x : (len(x), datasum[x], x))
for i in data:
    print(i)