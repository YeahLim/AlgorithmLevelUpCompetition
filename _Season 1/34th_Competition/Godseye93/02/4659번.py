lst = ['a', 'e', 'i', 'o', 'u']
accept = ['ee', 'oo']
while True:
    x = y = 0
    pw = input()
    if pw == 'end':
        break
    cnt = 0
    for i in lst:
        if i in pw:
            cnt += 1
    if cnt < 1:
        print(f'<{pw}> is not acceptable.')
        continue
    for i in range(len(pw) - 2):
        if pw[i] in lst and pw[i + 1] in lst and pw[i + 2] in lst:
            x = 1
        elif not(pw[i] in lst) and not(pw[i + 1] in lst) and not(pw[i + 2] in lst):
            x = 1
    if x == 1:
        print(f'<{pw}> is not acceptable.')
        continue
    for i in range(len(pw) - 1):
        if pw[i] == pw[i + 1]:
            if pw[i] == 'e' or pw[i] == 'o':
                continue
            else:
                y = 1
    if y == 1:
        print(f'<{pw}> is not acceptable.')
        continue
    print(f'<{pw}> is acceptable.')
