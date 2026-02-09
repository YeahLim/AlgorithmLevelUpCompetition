from collections import deque

N = int(input())  # 카드의 개수
cards = deque(range(1, N + 1)) # 카드를 deque로 저장

# 버린 카드를 저장할 리스트
card_x = []

# 카드가 한 장 남을 때까지 반복
while len(cards) > 1:
    card_x.append(cards.popleft())  # deque의 첫 번째 요소를 제거
    cards.append(cards.popleft())  # deque의 첫 번째 요소를 꺼내서 마지막에 추가

for i in range(len(card_x)):
    print(card_x[i], end=" ")
# 마지막으로 남은 카드 출력
print(cards[0])