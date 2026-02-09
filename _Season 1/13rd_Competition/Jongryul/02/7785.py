import sys
input = sys.stdin.readline

n = int(input())
st = set()
for _ in range(n):
    name, rec = input().rstrip().split()
    if rec == 'enter':
        st.add(name)
    else:
        st.remove(name)
rlt = sorted(list(st), reverse=True)
for i in rlt:
    print(i)