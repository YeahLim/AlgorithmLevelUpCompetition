g = int(input())
s = 1
e = 2
ans = []
while True:
    if pow(s+1,2) - pow(s,2) > g:
        break
    elif pow(e,2) - pow(s,2) == g:
        ans.append(e)
        s += 1
        e += 1
    elif pow(e,2) - pow(s,2) < g:
        e += 1
    elif pow(e,2) - pow(s,2) > g:
        s += 1

if len(ans) == 0:
    print(-1)
else:
    for number in ans: print(number)
