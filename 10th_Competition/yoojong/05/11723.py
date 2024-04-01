import sys

s = set()
m = int(sys.stdin.readline())
for _ in range(m):
    command = sys.stdin.readline().rstrip().split()
    if command[0] == 'add':
        s.add(int(command[1]))
    elif command[0] == 'remove':
        s.discard(int(command[1]))
    elif command[0] == 'check':
        if int(command[1]) in s:
            print(1)
        else:
            print(0)
    elif command[0] == 'toggle':
        if int(command[1]) in s:
            s.remove(int(command[1]))
        else:
            s.add(int(command[1]))
    elif command[0] == 'all':
        s.clear()
        for i in range(1,21):
            s.add(i)
    else:
        s.clear()
