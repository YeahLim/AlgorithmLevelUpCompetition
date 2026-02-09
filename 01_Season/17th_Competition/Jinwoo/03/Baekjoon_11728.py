import sys

A, B = map(int, input().split())                                                 # 배열의 길이 A, B

a_list = list(map(int, sys.stdin.readline().split()))                            # A 배열의 내용
b_list = list(map(int, sys.stdin.readline().split()))                            # B 배열의 내용

a_list = sorted(a_list)                                                     # A, B 배열내용 정렬
b_list = sorted(b_list)

point_a = 0                                                                 # A, B 리스트의 포인터 초기값
point_b = 0

result_list = []
for i in range(A+B):
    if point_a == A :
        result_list.append(b_list[point_b])
        #print("----- add point B only[", b_list[point_b], "] -----")
        point_b += 1

    elif point_b == B:
        result_list.append(a_list[point_a])
        #print("----- add point A only[", a_list[point_a], "] -----")
        point_a += 1

    else:

        if a_list[point_a] > b_list[point_b]:
            result_list.append(b_list[point_b])
            #print("----- add point A > B[", b_list[point_b], "] -----")
            point_b += 1

        elif a_list[point_a] == b_list[point_b]:
            result_list.append(a_list[point_a])
            #print("----- add point A = B[", a_list[point_a], "] -----")

            point_a += 1

        else:
            result_list.append(a_list[point_a])
            #print("----- add point A < B[", a_list[point_a], "] -----")
            point_a += 1
#print(result_list)

for i in result_list:
    print(i, end=" ")