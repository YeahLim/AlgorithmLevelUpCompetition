n = int(input())
set = set(input().split())
cheese_set = {tp for tp in set if tp.endswith("Cheese")}

if len(cheese_set) > 3:
    print("yummy")
else:
    print("sad")
