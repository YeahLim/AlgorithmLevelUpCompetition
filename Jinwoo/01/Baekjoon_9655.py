N = int(input())                                                        # 돌 개수 입력: N
                                                                        # 1개 or 3개씩 가져갈 수 있으므로
if N % 2 == 1:                                                          # N이 홀수면 상근이가 이김
    print("SK")
else:                                                                   # N이 짝수면 창영이가 이김
    print("CY")