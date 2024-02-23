import sys
input = sys.stdin.readline

dic = {'A+' : 4.5, 'A0' : 4.0, 'B+' : 3.5, 'B0' : 3.0, 'C+' : 2.5, 'C0' : 2.0, 'D+' : 1.5, 'D0' : 1.0, 'F': 0}

total1 = 0
total2 = 0
for _ in range(20):
    o, sc, gr = input().rstrip().split()
    if gr != 'P':
        total1 += float(sc)
        total2 += dic[gr] * float(sc)
print(round(total2/total1, 6))