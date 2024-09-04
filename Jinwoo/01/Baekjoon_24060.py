def merge_sort(A, K):
    # 전역 변수를 사용해 저장 순서를 기록할 리스트와 저장 횟수 초기화
    save_count = 0
    save_order = []

    def merge(A, p, mid, r):
        nonlocal save_count
        tmp = []
        i, j = p, mid + 1

        # 병합 과정: A[p..mid]와 A[mid+1..r]을 병합하는 과정
        # 이 루프의 시간 복잡도는 두 부분 배열을 병합하는 데 O(r - p + 1), 즉 O(N)에 해당함
        while i <= mid and j <= r:
            if A[i] <= A[j]:
                tmp.append(A[i])
                i += 1
            else:
                tmp.append(A[j])
                j += 1

        # 남은 왼쪽 부분을 모두 tmp에 추가
        # 남은 원소를 그대로 tmp에 저장하는 루프는 O(mid - i + 1) → O(N)의 시간 복잡도를 가짐
        while i <= mid:
            tmp.append(A[i])
            i += 1

        # 남은 오른쪽 부분을 모두 tmp에 추가
        # 남은 원소를 그대로 tmp에 저장하는 루프는 O(r - j + 1) → O(N)의 시간 복잡도를 가짐
        while j <= r:
            tmp.append(A[j])
            j += 1

        # 정렬된 값을 원래 배열 A[p..r]에 다시 저장하는 과정
        # 병합된 값을 다시 원래 배열에 덮어쓰는 데도 O(r - p + 1), 즉 O(N)이 소요됨
        for t in range(len(tmp)):
            A[p + t] = tmp[t]
            save_order.append(A[p + t])  # 저장되는 값을 기록
            save_count += 1
            if save_count == K:  # 저장 횟수가 K에 도달하면 바로 출력
                return A[p + t]

        return None

    def sort(A, p, r):
        if p < r:
            mid = (p + r) // 2  # 중간 지점을 계산
            # 배열을 두 부분으로 나누는 시간 복잡도는 O(1) → 상수 시간

            # 왼쪽 부분 정렬
            result = sort(A, p, mid)
            if result is not None:
                return result

            # 오른쪽 부분 정렬
            result = sort(A, mid + 1, r)
            if result is not None:
                return result

            # 병합 단계
            # 병합은 두 부분 배열을 하나로 합치기 때문에 O(N)의 시간 복잡도를 가짐
            return merge(A, p, mid, r)
        return None

    result = sort(A, 0, len(A) - 1)

    if result is not None:
        print(result)  # K번째 저장된 값을 출력
    else:
        print(-1)  # 저장 횟수가 K보다 작으면 -1 출력

# 입력 처리
N, K = map(int, input().split())
A = list(map(int, input().split()))

merge_sort(A, K)
