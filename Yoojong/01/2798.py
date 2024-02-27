n, m = map(int, input().split())
cards = list(map(int,input().split()))
cards = sorted(cards)

ans_list = []
for i in range(n-2):    #처음꺼
    for j in range(i+1,n-1):  #두번째꺼
        for k in range(j+1,n):  #세번째꺼
            ans = cards[i]+cards[j]+cards[k]
            if ans <= m:
                ans_list.append(ans)
print(max(ans_list))