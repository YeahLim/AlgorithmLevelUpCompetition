INPUT_MAX = 1000000                                                             # 최대 입력 자연수

# DP를 1로 초기화 시켜주자
dp_list = [1] * (INPUT_MAX + 1)

# S: 값 누적 리스트
S = [0] * (INPUT_MAX + 1)

# DP 알고리즘 구현
for i in range(2, INPUT_MAX + 1):                                               # DP는 이전값을 참고하여 다음값을 구하는 알고리즘
    j = 1                                                                       # 1부터 1,000,000 까지의 약수를 써보면 일정한 규칙이 있다.
                                                                                # 1은 이미 초기화 시켜주었으므로 i=2부터 시작
    while i * j <= INPUT_MAX:                                                   # i * j가 최대값 INPUT_MAX에 도달할때까지

        dp_list[i*j] += i                                                       # i를 DB 리스트에 일정 주기(j만큼 인덱스값이 증가) 더해주자
        j += 1


# DP 알고리즘 값을 누적합 해주기
for i in range(1, INPUT_MAX+1):
    S[i] = S[i-1] + dp_list[i]

T = int(input())                                                                # 테스트 케이스 수: Tans = []
ans = []                                                                        # 입력받은 자연수 값을 저장할 array
for _ in range(T):                                                              # 테이스케이스 수만큼
    a = int(input())                                                            # 자연수 a를 입력받고
    ans.append(S[a])                                                            # g(a)를 구해주자. 그리고 구한값 배열에 넣기

print('\n'.join(map(str,ans))+'\n')                                             # 결과값 배열 출력

