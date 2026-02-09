word = input()
stack = []
cnt = 0
for i in range(len(word)):
    if word[i] == "(":
        stack.append("(")
    else :
        if word[i-1] == "(":
            stack.pop()
            cnt += len(stack)
            
        else:
            stack.pop()
            cnt += 1 
print(cnt)