word = input()
result = []

length = len(word)

for i in range(1, length - 1):
    for j in range(i + 1, length):
        part1 = word[:i][::-1]
        part2 = word[i:j][::-1]
        part3 = word[j:][::-1]
        combined = part1 + part2 + part3
        result.append(combined)

print(min(result))
