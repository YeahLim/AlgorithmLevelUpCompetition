import re

sound = input().strip()

pattern = r'^(100+1+|01)+$'

if re.fullmatch(pattern, sound):
    print("SUBMARINE")
else:
    print("NOISE")