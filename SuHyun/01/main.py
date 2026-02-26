if __name__ == '__main__':
    row = list(map(int,input().split(' ')))
    N = row[0]
    M = row[1]

    numList = [0]
    numList.extend(list(map(int,input().split(' '))))
    sumList = [0]
    sum = 0

    for i in range(1,len(numList)):
        sum += numList[i]
        sumList.append(sum)

    result = []

    for i in range(M):
        row = list(map(int,input().split(' ')))
        start = row[0]
        end = row[1]
        result.append(str(sumList[end] - sumList[start-1]))

    print('\n'.join(result))