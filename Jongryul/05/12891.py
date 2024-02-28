import sys
input = sys.stdin.readline

n, m = map(int, input().split())
p = input().rstrip()
a, c, g, t = map(int, input().split())
dic = {'A' : a, 'C' : c, 'G' : g, 'T' : t}

cnt = 0
tmp = p[:m]
for alpha in tmp:
    dic[alpha] -= 1

if dic['A'] <= 0 and dic['C'] <= 0 and dic['G'] <= 0 and dic['T'] <= 0:
    cnt += 1

for i in range(m, n):
    dic[p[i-m]] += 1
    dic[p[i]] -= 1
    if dic['A'] <= 0 and dic['C'] <= 0 and dic['G'] <= 0 and dic['T'] <= 0:
        cnt += 1
print(cnt)