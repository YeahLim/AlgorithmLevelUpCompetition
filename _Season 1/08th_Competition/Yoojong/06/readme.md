# [백준] 리모컨 (1107번)

## ⏰  **time**

3시간

## :pushpin: **Algorithm**

브루트포스

## ⏲️**Time Complexity**
O(N)

## :round_pushpin: **Logic**

- 그냥 처음부터 끝까지 보는 것이다
'''
min_count = abs(100 - target)

for nums in range(1000001):
    nums = str(nums)
    
    for j in range(len(nums)):
        # 각 숫자가 고장났는지 확인 후, 고장 났으면 break
        if int(nums[j]) in broken:
            break

        # 고장난 숫자 없이 마지막 자리까지 왔다면 min_count 비교 후 업데이트
        elif j == len(nums) - 1:
            min_count = min(min_count, abs(int(nums) - target) + len(nums))

'''
## :black_nib: **Review**
- 2시간 반 동안 풀다가 너무 빡쳐서 참지 못하고 답지를 참고하였다.. 
