import sys
s = sys.stdin.readline().rstrip()

st = set()

for i in range(len(s)):
    tmp = s[i]
    st.add(tmp)
    for j in range(i+1, len(s)):
        tmp += s[j]
        st.add(tmp)
print(len(st))