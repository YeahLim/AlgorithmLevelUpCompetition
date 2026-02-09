
def chatbot(x, cnt):
    if x <= 0 :
        print("*")

    else:
        # 재귀함수 실행시 실행되는 부분
        print('* ' * (x - cnt) + '*' * (1 + cnt*4) + ' *' * (x - cnt))
        print('* ' * (x - cnt + 1) + ' ' * (1 + (cnt - 1) * 4) + ' *' * (x - cnt + 1))

        if cnt == 1:
            # cnt가 x와 같을때, 즉 마지막 함수 호출때 출력되는 부분
            print('* ' * (x - (cnt - 1)) + '*' * (1 + (cnt - 1)*4) + ' *' * (x - (cnt - 1)))
        elif cnt < 1:
            print("*")
        else:

            # 위 내용을 출력하고 자기 자신을 한번 더 호출해준다. cnt가 x값과 같을때까지 윗 내용을 반복하게 된다.
            chatbot(x, cnt - 1)

        # 함수가 끝날때 출력되는 부분. 함수에서 나올때마다 출력된다.
        print('* ' * (x - cnt + 1) + ' ' * (1 + (cnt - 1) * 4) + ' *' * (x - cnt + 1))
        print('* ' * (x - cnt) + '*' * (1 + cnt*4) + ' *' * (x - cnt))


n = int(input())    # 재귀함수를 반복할 횟수 입력
chatbot(n - 1, n - 1)   # 재귀함수 첫 호출