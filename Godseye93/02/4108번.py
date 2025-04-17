import sys
input = sys.stdin.readline

def count_mines(grid, r, c, rows, cols):
    directions = [(-1, -1), (-1, 0), (-1, 1), (0, -1), (0, 1), (1, -1), (1, 0), (1, 1)]
    count = 0
    for dr, dc in directions:
        nr, nc = r + dr, c + dc
        if 0 <= nr < rows and 0 <= nc < cols and grid[nr][nc] == '*':
            count += 1
    return count

def solve_mine_sweeper():
    while True:
        R, C = map(int, input().split())
        if R == 0 and C == 0:
            break
        grid = [list(input().strip()) for _ in range(R)]
        result = [['' for _ in range(C)] for _ in range(R)]
        for i in range(R):
            for j in range(C):
                if grid[i][j] == '*':
                    result[i][j] = '*'
                else:
                    result[i][j] = str(count_mines(grid, i, j, R, C))
        for row in result:
            print(''.join(row))

solve_mine_sweeper()