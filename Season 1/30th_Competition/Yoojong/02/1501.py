from collections import defaultdict
dic = defaultdict(dict)


N = int(input())
for i in range(N):
    word = input()
    if (len(word) <= 2):
        try : dic[word]['']+=1
        except : dic[word]['']=1
    else:
        first_k = word[0]+word[-1]
        sec_k = str(sorted(word[1:-1]))
        try : dic[first_k][sec_k]+=1
        except : dic[first_k][sec_k]=1
        
M = int(input())
for i in range(M):
    sen = input().split(' ')
    count = 1
    isCan = False
    for idx, w in enumerate(sen):
        temp = 0
        if (len(w) <= 2):
            try :temp += dic[w]['']
            except: temp
        else:
            start = w[0]
            end = w[-1]
            middle = str(sorted(w[1:-1]))
            try: temp+= dic[start+end][middle]
            except: temp
        if temp != 0:
            count*=temp
            isCan = True
    if not isCan:
        count = 0
    print(count)
