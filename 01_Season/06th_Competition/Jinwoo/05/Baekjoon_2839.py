N = int(input())                                                    # 봉지 개수 입력

gram_5 = N // 5                                                     # 반복문에서 반복할 횟수, 5로 나눈 횟수 (5로 나누었을때 나머지가 있을경우 5를 하나씩 덜 나누고 나머지 값을 3으로 나눠준다)
Good_result = 0                                                     # 최적의 봉지 묶음값

if N % 5 != 0:                                                      # 처음에 5로 나누었을때 나머지가 있을 경우 5를 하나씩 덜 나눠주고 나머지값을 3으로 나눠본다.

    for i in range(0, gram_5 + 1):
        BongJi = N - (5 * (gram_5 - i))                             # BongJi 변수는 N에서 5를 i만큼 덜 나눈값을 담는다.

        if BongJi % 3 == 0:                                         # BongJi 변수는 N에서 5를 i만큼 덜 나눈값에서 3으로 나눠 떨어진다면 그것이 최적의 봉지 묶음 값이므로 조건문을 걸어 출력한다.
            Good_result = (BongJi // 3) + (gram_5 - i)              # 최적의 봉지 묶음값에 3gram의 봉지 갯수와 5gram의 봉지 갯수를 넣어준다.
            #print("5gram", gram_5 - i, "3gram", BongJi // 3)       # 5gram과 3gram 의 봉지수 확인을 위한 print()
            print(Good_result)                                      # 최적의 봉지값 출력
            break

        #print(i, BongJi)
        if i == gram_5:                                             # 만일 for문이 다 끝나고도 위에 if문으로 빠져 for문이 break가 되지 않았다면 5와 3으로 나눈 모든 경우의 수를 본것이므로 정확한 N킬로그램을 만들수 없는 것이다.
            print(-1)                                               # 따라서 정확한 N킬로그램을 만들수 없을 경우의 -1를 출력한다.

else:                                                               # 5로 나눠떨어질 경우 당연히 그 수가 최적의 경우이므롷 바로 N을 5로 나눈 몫인 gram_5를 출력한다.
    print(gram_5)