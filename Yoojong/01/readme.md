[백준] 블랙잭 (2798번🩶5️⃣)
⏰ time
20분

📌 Algorithm
브루트포스 알고리즘

⏲️Time Complexity
O(n^3)
📍 Logic
모두 확인
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

✒️ Review
이렇게 하지말고 from itertools imoprt combination 해서 푸는게 좋을 것 같다.
