if __name__ == '__main__':
    row = list(map(int,input().split(' ')))
    N = row[0]
    M = row[1]
    cnt = 0
    numList = list(map(int,input().split(' ')))

    for i in range(0,N):
        sum =   0
        for j in range(i,N):
            sum += numList[j]
            if sum == M:
                cnt +=1

    print(cnt)