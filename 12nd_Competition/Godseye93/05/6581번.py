import sys

def format_html():
    line = ""
    for html in sys.stdin:
        tokens = html.split()
        for token in tokens:
            if token == '<br>':
                print(line)
                line = ""
            elif token == '<hr>':
                if line:
                    print(line)
                print('-' * 80)
                line = ""
            else:
                if len(line) + len(token) + 1 > 80:
                    print(line)
                    line = token
                else:
                    if line:
                        line += " " + token
                    else:
                        line = token
    if line:
        print(line)

format_html()
