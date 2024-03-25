from collections import deque

N = int(input())                                                    # 마지막 카드 번호 N 입력 (카드개수)
# 시간복잡도 O(1)

card = deque()                                                           # 카드 리스트

for i in range(N):                                                  # 마지막 카드번호 만큼 반복하여
    card.append(i+1)                                                # 카드 리스트에 오름차순으로 카드 번호 입력
# 시간복잡도 O(N)

#print(card)

while len(card) > 1:
    card.popleft()                                                  # 카드 리스트의 첫번째 카드 빼주기 (제일 위에 있는 카드 버리기)

    card.append(card.popleft())                                     # 그 다음 제일 위에 있는 카드를 빼, 제일 아래 있는 카드 밑으로 옯긴다. 즉 리스트의 첫번째 인덱스 값을 빼(popleft()) 마지막 인덱스 다음으로 추가(append())시켜주면 된다.
    #print(card)
# 시간복잡도 O(N)

print(card[0])