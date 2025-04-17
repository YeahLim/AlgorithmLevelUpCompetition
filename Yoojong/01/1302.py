import sys

n = int(sys.stdin.readline())
book_names = dict()
for _ in range(n):
    book_name = sys.stdin.readline()
    if book_name in book_names.keys():
        book_names[book_name] +=1
    else:
        book_names[book_name] = 1

book = sorted(book_names.items(), key = lambda x : (-x[1], x[0]))
print(book[0][0])

