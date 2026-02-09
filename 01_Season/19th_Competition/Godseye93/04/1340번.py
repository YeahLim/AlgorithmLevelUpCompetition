import sys

input = sys.stdin.readline

m, d, y, t = input().split()

d = int(d[:-1])

y = int(y)

h, min = map(int, t.split(':'))

m_names = ["January", "February", "March", "April", "May", "June",
           "July", "August", "September", "October", "November", "December"]

m_days = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

if y % 400 == 0 or (y % 4 == 0 and y % 100 != 0):
    m_days[1] += 1

total_minutes_year = sum(m_days) * 24 * 60

m_idx = m_names.index(m)
current_minutes = (sum(m_days[:m_idx]) + d - 1) * 24 * 60 + h * 60 + min

progress = current_minutes / total_minutes_year * 100

print(progress)
