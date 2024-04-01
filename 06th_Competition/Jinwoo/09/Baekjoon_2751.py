import sys
N = int(input())                                    # 줄 개수 입력
num_list = []                                       # 숫자 정보를 받을 리스트

for i in range(N):                                  # N 만큼 숫자 정보를 반복해서 입력 받음
    num_list.append(int(sys.stdin.readline()))      # 입력받은 숫자를 정수형태로 숫자 리스트에 넣음

#print(num_list)
num_list.sort()                                     # 숫자리스트 오름차순 정렬

print(num_list[0])                                  # 오름차순으로 정렬된 숫자 리스트의 0번째 인덱스 출력 (반복문 안에서 현재 인덱스와 이전 인덱스를 비교하여 출력하는데, 0번째 값은 비교할 인덱스가 없으므로 반복문 이전에 미리 출력을 해놓는다.)
for i in range(1, len(num_list)):                   # 0번째 인덱스를 제외하고 1번째 인덱스부터 리스트의 길이만큼 반복하는 반복문을 만들어 주고

    if num_list[i] != num_list[i-1]:                # 이 반복문 안에서 만일 현재 i 인덱스가 i-1 값과 다르다면 그 인덱스 값을 출력하도록 하였다.
        print(num_list[i])
