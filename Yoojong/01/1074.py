import sys
N, r, c = map(int, sys.stdin.readline().split())

ans = 0
while N!=0:

    N -= 1
    #제 2사분면
    if r< 2**N and c<2 **N:
        ans += 0

    #제 1사분면
    elif r < 2**N and c>=2**N:
        ans += (2**N) * (2**N)
        c -= (2**N)

    # 제3사분면
    elif r >= 2 ** N and c < 2 ** N:
        ans += (2 ** N) * (2 ** N) * 2
        r -= (2 ** N)

    # 제4사분면
    else:
        ans += (2 ** N) * (2 ** N) * 3
        r -= (2 ** N)
        c -= (2 ** N)
print(ans)