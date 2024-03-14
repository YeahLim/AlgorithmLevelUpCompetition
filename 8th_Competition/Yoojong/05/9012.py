import sys
n = int(sys.stdin.readline())

for _ in range(n):
    parenthesis = list(sys.stdin.readline().rstrip())
    check = list()
    for i in parenthesis:
        #시작
        if len(check) == 0:
            if i != '(':
                check.append(')')
                break
            check.append(i)
            
        #진행중
        elif i == ')':
            check.pop()
        else:
            check.append('(')
    
    if len(check) ==0:
        print("YES")
    else:
        print("NO")