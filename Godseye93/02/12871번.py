import sys
import math

input = sys.stdin.readline

s = input().strip()
t = input().strip()

len_s = len(s)
len_t = len(t)

lcm = (len_s * len_t) // math.gcd(len_s, len_t)

s_repeated = s * (lcm // len_s)
t_repeated = t * (lcm // len_t)

print(1 if s_repeated == t_repeated else 0)