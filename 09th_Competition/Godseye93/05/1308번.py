from datetime import *

start_date = list(map(int, input().split()))
end_date = list(map(int, input().split()))


if start_date[0] + 1000 < end_date[0]:
    print("gg")
elif start_date[0] + 1000 == end_date[0] and (start_date[1], start_date[2]) <= (end_date[1], end_date[2]):
    print("gg")
else:
    start_date = date(*start_date)
    end_date = date(*end_date)
    print("D-"+str(end_date.toordinal() - start_date.toordinal()))