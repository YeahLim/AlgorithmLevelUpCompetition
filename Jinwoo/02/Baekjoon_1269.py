import sys
input = sys.stdin.readline

N, M = map(int, input().split())
# print(N, M)

A_list = set(map(int, input().split()))     # 집합 A 정렬
B_list = set(map(int, input().split()))     # 집합 B 정렬

only_in_A = A_list - B_list
only_in_B = B_list - A_list

print(len(only_in_A) + len(only_in_B))