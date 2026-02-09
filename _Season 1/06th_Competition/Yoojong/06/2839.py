# 몫
n = int(input())
ans = 0
while True:
    #global ans
    if n<0:
        ans=-1
        break

    if n%5 == 0:
        
        ans = ans + n//5
        break

    else:
        n -= 3
        ans+=1
print(ans)
#ans = 0

#tree = []
#31

#min=987654321
#def find_num(n, ans):
#    global min
#    if (n, ans) in tree:
#        return
#    if n ==0 and min>ans:   #ans
#        min = ans

#    tree.append((n,ans) ) 
#    if n>=3:
#        find_num(n-3,ans+1)
#    if n>=5:

#        find_num(n-5,ans+1)
#    else:
#        return
#find_num(n,ans)

#if min ==987654321:
#print(-1)
##else:
#print(min)





"""

#31구분 못함
while n>0:
    if n>=5 and ((n-5)%5==0 or (n-5)%3==0) :
        n -=5
        ans +=1
    elif n>=3 and ((n-3)%5==0 or (n-3)%3==0):
        n -=3
        ans +=1
    else:
        ans = -1
        break
print(ans)
"""

#-5를 한 후 3으로 나눠지면 5를 빼는게 문제라면
#ex) 9+5 = 14 (5 3 3 3,
# 31(5, 26(21, 5) 
