N, k = list(map(int, input().split()))              # 응시자수 N과 상을 받을 사람의 수(커트라인) k 입력
score = list(map(int, input().split()))             # 각 학생의 점수를 공백을 두고 입력
score.sort()                                        # 점수 리스트 오름차순으로 정렬
print(score[N-k])                                   # 점수 리스트의 N-k 번째 인덱스가 커트라인이므로 출력