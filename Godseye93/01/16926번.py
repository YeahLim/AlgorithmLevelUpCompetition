import sys
input = sys.stdin.readline

rows, cols, rotations = map(int, input().split())
matrix = [list(map(int, input().split())) for _ in range(rows)]

for _ in range(rotations):
    for layer in range(min(rows, cols) // 2):
        x, y = layer, layer
        temp = matrix[x][y]

        for j in range(layer + 1, rows - layer):
            x = j
            prev_value = matrix[x][y]
            matrix[x][y] = temp
            temp = prev_value

        for j in range(layer + 1, cols - layer):
            y = j
            prev_value = matrix[x][y]
            matrix[x][y] = temp
            temp = prev_value

        for j in range(layer + 1, rows - layer):
            x = rows - j - 1
            prev_value = matrix[x][y]
            matrix[x][y] = temp
            temp = prev_value

        for j in range(layer + 1, cols - layer):
            y = cols - j - 1
            prev_value = matrix[x][y]
            matrix[x][y] = temp
            temp = prev_value

for i in range(rows):
    for j in range(cols):
        print(matrix[i][j], end=' ')
    print()
