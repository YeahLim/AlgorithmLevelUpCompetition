T = int(input())                                        # 테스트 케이스 입력: T

for k in range(1, T + 1):
    height_sort = []                                    # 입력받은 값을 정렬할 배열
    height = list(map(int, input().split()))            # 테스트 케이스 수와 키값 입력

    cnt = 0                                             # 뒤로 밀려난 수 세기

    for i in range(1,len(height)):
        if i == 1:                                      # 반복문 첫번째는 정렬 배열에 아무 값도 없으므로 현재값을 정렯 배열에 넣어주자.
            height_sort.append(height[i])
            continue

        now = height[i]                                 # 현재 반복문에서 비교할 수

        if now > max(height_sort):                      # 정렬한 값의 최대값보다 현재 비교값이 클 경우
            height_sort.append(now)                     # 현재값을 정렬 배열의 뒤에 추가해주자.
            continue

        for j in range(len(height_sort)):               # 뒤로 밀려난 수 세는 반복문
            if height_sort[j] > now:                    # 현재값보다 큰 값들을 찾아줌
                height_sort.insert(j, now)

                cnt += (len(height_sort) - j - 1)       # 처음 입력받은 배열의 인덱스값에서 정렬된 배열의 인덱스 값을 빼주면 현재값이 정렬되는데에 뒤로 밀어나야할 회수를 구할 수 있음
                break
    print(k, cnt)