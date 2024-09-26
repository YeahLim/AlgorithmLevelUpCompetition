import sys
input = sys.stdin.readline

num_cranes = int(input())
crane_weights = list(map(int, input().split()))
num_boxes = int(input())
box_weights = list(map(int, input().split()))

crane_weights.sort(reverse=True)
box_weights.sort(reverse=True)

time = 0

if box_weights[0] > crane_weights[0]:
    time = -1
else:
    while box_weights:
        for crane in crane_weights:
            if box_weights and crane < box_weights[-1]:
                continue
            for box in box_weights:
                if crane >= box:
                    box_weights.remove(box)
                    break
        time += 1

print(time)