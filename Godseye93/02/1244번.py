import sys
input = sys.stdin.readline

N = int(input())
switch = list(map(int, input().split()))
S = int(input())
students = [list(map(int, input().split())) for _ in range(S)]

for gender, num in students:
    if gender == 1:
        for i in range(num-1, N, num):
            switch[i] ^= 1
    else:
        switch[num-1] ^= 1
        left, right = num-2, num
        while left >= 0 and right < N and switch[left] == switch[right]:
            switch[left] ^= 1
            switch[right] ^= 1
            left -= 1
            right += 1

for i in range(0, N, 20):
    print(*switch[i:i+20])