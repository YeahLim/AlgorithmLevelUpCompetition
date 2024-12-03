import sys
input = sys.stdin.readline

N = int(input())        # 로프 개수
rope_len = []           # 로프 길이 모음

for i in range(N):
    rope_len.append(int(input()))
#print(rope_len)

rope_len = sorted(rope_len)     # 로프 길이 배열을 정렬한다.

# 정렬되어 N개의 로프를 사용했을때의 최대 하중값은 첫번째 인덱스값에 N을 곱한값과 같다. N-1개의 최대 하중 값은 두번째 인덱스에 N-1을 곱한 값
# 따라서 정렬된 배열에 N부터 1까지 사용할 로프의 수를 곱해준 후 최댓값을 구하면 최대 하중을 구할 수 있다.
use_rope = N
for j in range(N):
    rope_len[j] = rope_len[j] * use_rope
    use_rope -= 1
#print(rope_len)
print(max(rope_len))