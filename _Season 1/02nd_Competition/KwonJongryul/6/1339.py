import sys
input = sys.stdin.readline

n = int(input())
dic = {}
nums = []
words = []
for _ in range(n):
	word = input().rstrip()
	words.append(word)
	l = len(word)
	for i in range(l):
		num = 10 ** (l-1-i)
		if dic.get(word[i]):
			dic[word[i]] += num
		else:
			dic[word[i]] = num

for num in dic:
	nums.append((dic[num], num))
nums.sort(reverse=True)

t = 9
for num in nums:
	dic[num[1]] = t
	t -= 1

rlt = 0
for word in words:
	total = ''
	for w in word:
		total += str(dic[w])
	rlt += int(total)

print(rlt)
