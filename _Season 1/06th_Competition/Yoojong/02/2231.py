n = int(input())

ans = 0
for i in range(1, n):
    i_str = str(i)
    i_list = list(map(int,i_str))
    
    if n == (sum(i_list)+i):
        ans = i
        break

if ans ==0:
    print(0)
else:
    print(ans)

#후기------------------------------
#list를 만들 필요가 없었네..
#바로 그냥 i_list = sum(map(int, i_str)) 하면 됐네
