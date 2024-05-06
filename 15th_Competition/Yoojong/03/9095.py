#1,2,3 더하기 실3 9095
import sys
T = int(sys.stdin.readline())
#점화식 db[i] = db[i-1] + db[i-2] + db[i-3], i>=4
for _ in range(T):
    n = int(sys.stdin.readline())
    db = [0 for i in range (n+1)]
    for i in range(1, n+1):
        if i ==1:
            db[i] = 1
        elif i == 2:
            db[i] = 2
        elif i == 3:
            db[i] = 4
        else:
            db[i] = db[i-1] + db[i-2] + db[i-3]
    print(db[n])

