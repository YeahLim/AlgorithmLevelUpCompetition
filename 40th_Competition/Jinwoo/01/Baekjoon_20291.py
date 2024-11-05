import sys

Number_of_files = int(input())
extension_cnt = {}      # 확장자별 파일 개수를 저장할 딕셔너리

for i in range(Number_of_files):
    file_name = sys.stdin.readline().strip()
    extension = file_name.split('.')[1]        # split을 활용하여 확장자 구분
    #print(extension)

    if extension in extension_cnt:
        extension_cnt[extension] += 1       # 기존에 확장자 파일이 있을 경우, 개수를 더해주자
    else:
        extension_cnt[extension] = 1        # 새로운 유형의 확장자 추가

for j in sorted(extension_cnt.keys()):      # 딕셔너리의 key값 = 확장자 종류, 알파벳순으로 정렬
    print(j, extension_cnt[j])              # j는 확장자명, value값으로는 해당 확장자 파일의 개수가 출력된다.