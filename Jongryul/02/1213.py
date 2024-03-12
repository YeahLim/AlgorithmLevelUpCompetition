import sys
w = sorted(list(sys.stdin.readline().rstrip()))

l = len(w)
tmp = ''

rlt = []
check = False
i = 0

while i < l:
    if i < l-1 and w[i] == w[i+1]:
        rlt.append(w[i])
        i += 2
    else:
        if not check:
            tmp = w[i]
            i += 1
            check = True
        else:
            print("I'm Sorry Hansoo")
            break
else:
    rlt += [tmp] + list(reversed(rlt))
    if list(reversed(rlt)) == rlt:
        print(''.join(rlt))
    else:
        print("I'm Sorry Hansoo")