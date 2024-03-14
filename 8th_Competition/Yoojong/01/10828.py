def push(i):
    l.append(i)
def pop():
    if len(l) ==0:
        print(-1)
    else:
        print(l.pop())
def size():
    print(len(l))
def empty():
    if len(l)==0:
        print(1)
    else:
        print(0)
def top():
    if len(l)==0:
        print(-1)
    else:
        print(l[len(l)-1])
import sys
l = list()
n = int(sys.stdin.readline())

for _ in range(n):
    command = sys.stdin.readline().rstrip()
    if command == 'pop':
        pop()
    elif command == 'size':
        size()
    elif command =='empty':
        empty()
    elif command =='top':
        top()

    else:
        c, i = command.split()
        i = int(i)
        push(i)


