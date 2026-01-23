import sys

input = sys.stdin.readline

PI = 3.141592

x1, y1, x2, y2, x3, y3 = map(int, input().split())

CCW = abs((x1*y2+x2*y3+x3*y1)-(x2*y1+x3*y2+x1*y3))/2

CG_X = (x1+x2+x3)/3.0
CG_Y = (y1+y2+y3)/3.0

Rotate_X = 2*PI*CG_Y*CCW
Rotate_Y = 2*PI*CG_X*CCW

print(f'{Rotate_X:.10f} {Rotate_Y:.10f}')