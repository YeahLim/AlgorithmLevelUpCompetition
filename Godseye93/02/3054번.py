s = input().strip()
output = ["", "", "", "", ""]

cnt = 1
symbol = '#'
for c in s:
    prev_symbol = '*'
    if cnt % 3 == 0:
        symbol = '*'
        cnt = 1
    else:
        if symbol != '*':
            prev_symbol = '#'
        symbol = '#'
        cnt += 1

    output[0] += f"..{symbol}."
    output[1] += f".{symbol}.{symbol}"
    output[2] += f"{prev_symbol}.{c}."
    output[3] += f".{symbol}.{symbol}"
    output[4] += f"..{symbol}."

if len(s) > 0:
    output[0] += "."
    output[1] += "."
    output[2] += symbol
    output[3] += "."
    output[4] += "."

for line in output:
    print(line)