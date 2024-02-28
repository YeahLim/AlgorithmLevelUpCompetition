# [백준] 소트인사이드 (1427번🩶5️⃣)

## ⏰  **time**

15분

## :pushpin: **Algorithm**

문자열
정렬

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 수 정렬하기3 과 같은 방식!
```
n = sys.stdin.readline().rstrip()

num_list = [0]*10
for i in n:
    i_int = int(i)
    num_list[i_int] +=1

for index, val in reversed(list(enumerate(num_list))):
    if val !=0:
        sys.stdout.write(str(index) * val )
```
  

## :black_nib: **Review**

- sys.stdin.readline()으로 str을 입력받을 땐 rstrip() 을 사용하자!
- enumerate 함수에 reverse를 사용하고 싶으면 reversed(list(enumerate( ___ ))) 이렇게 사용하자!
- 참고로 sys.stdout.write(  ) 안에는 str만 인식이 가능하다!
