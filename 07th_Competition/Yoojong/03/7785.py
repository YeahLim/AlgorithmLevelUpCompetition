import sys
n = int(sys.stdin.readline())

office ={}
e_office = []
for _ in range(n):
    name, status = sys.stdin.readline().split()
    office[name] = status

for k in office.keys():
    if office[k]=='enter':
        e_office.append(k)

e_office = sorted(e_office, reverse=True)
for _ in e_office:
    print(_)
