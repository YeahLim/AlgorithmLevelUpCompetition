n = int(input())
ans =[]

count = 0 
for i in range(666, 987654321):
    i_str = str(i)
    if '666' in i_str:
        ans.append(i)
        count+=1

    if count == n:
        break

ans = sorted(ans)

print(ans[n-1])
