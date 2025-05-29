import sys

input = sys.stdin.readline

while True:
    try:
        x = int(input()) * 10000000
        n = int(input())
        blocks = [int(input()) for _ in range(n)]
        blocks.sort()
        start, end = 0, n - 1
        found = False

        while start < end:
            curr_sum = blocks[start] + blocks[end]
            if curr_sum == x:
                print(f"yes {blocks[start]} {blocks[end]}")
                found = True
                break
            elif curr_sum < x:
                start += 1
            else:
                end -= 1

        if not found:
            print("danger")

    except:
        break