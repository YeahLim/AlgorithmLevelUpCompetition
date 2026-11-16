class Node:
    def __init__(self, val, length):
        self.val = val
        self.length = length

def solution(prices):
    length = len(prices)
    answer = [0] * length
    stack = [Node(answer[length - 1], 0)]

    for i in range(length - 2, -1, -1):
        if stack[-1].val < prices[i]:
            answer[i] = 1
            stack.append(Node(prices[i], 1))
        else:
            curr = stack.pop()
            curr.length += 1
            curr.val = prices[i]
            while stack and stack[-1].val >= prices[i]:
                nxt = stack.pop()
                curr.length += nxt.length
            answer[i] = curr.length
            stack.append(curr)

    return answer