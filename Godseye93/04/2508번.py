import sys

def count_patterns(grid, rows, cols):
    count = 0
    for i in range(rows):
        for j in range(cols - 2):
            if grid[i][j:j+3] == ['>', 'o', '<']:
                count += 1
    for i in range(rows - 2):
        for j in range(cols):
            if [grid[i][j], grid[i+1][j], grid[i+2][j]] == ['v', 'o', '^']:
                count += 1
    return count

input = sys.stdin.readline

T = int(input().strip())
for _ in range(T):
    input()
    r, c = map(int, input().strip().split())
    grid = [list(input().strip()) for _ in range(r)]
    print(count_patterns(grid, r, c))