s = input()


now = -1
num_1 = 0
num_0 = 0
for i in range(len(s)):
    if s[i] != now:
        now = s[i]
        if now == '1':
            num_1 += 1
        else:
            num_0 += 1
print(min(num_0, num_1))