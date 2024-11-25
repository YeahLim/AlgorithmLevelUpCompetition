import sys
input = sys.stdin.readline

S = int(input())    # 자연수 S (1 ≤ S ≤ 4,294,967,295)

# 자연수의 개수 count
temp = 0

while True:
    S -= temp
    if S == 0:
        # print("딱 맞아 떨어저서 temp 값 유지")
        break

    elif S > 0:
        #print("----------------")
        #print("현재 숫자: ", temp)
        #print("남은 숫자: ", S)
        temp += 1

    else:
        #print("딱 맞아 떨어지지 않아 temp -1")
        temp -= 1
        break
print(temp)