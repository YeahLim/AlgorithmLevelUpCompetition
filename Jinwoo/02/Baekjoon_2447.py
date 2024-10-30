N = int(input())        # 3의 거듭제곱

def draw_stars (star_LEN):

    # 기본 패턴 정의 '*'
    if star_LEN == 1:
        return ['*']
    # 재귀적인 방법으로 함수를 계속 호출하여 star_LEN이 1이 되었을 때 '*'을 리턴하여 준다.
    # 그렇게 for문을 한번 돌린 L의 list는 ['***', '* *', '***'] 구조가 된다.

    Stars = draw_stars(star_LEN//3)
    # 3이 입력된 경우 기본 패턴 정의를 함.
    # 그 다음인 9가 입력이 된 경우는 ['***', '* *', '***']가 기본 패턴 구조가 된다.
    # 따라서 9일때 첫번째, 두번째 세번째 for문을 돌린 경우
    # ['*********', '* ** ** *', '*********']
    # ['***   ***', '* *   * *', '***   ***']
    # ['*********', '* ** ** *', '*********']
    # 다음과 같은 구조가 나오며 이것은 다음 재귀함수 호출때의 기본 구조가 된다.

    L = []

    for S in Stars:
        L.append(S*3)
    for S in Stars:
        L.append(S+' '*(star_LEN//3)+S)
    for S in Stars:
        L.append(S*3)
    return L


# '\n'.join() 으로 리스트에 있는 패턴을 한줄씩 출력.
print('\n'.join(draw_stars(N)))