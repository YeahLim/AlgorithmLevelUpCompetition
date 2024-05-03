# [SWEA - D2️⃣] 1983. 조교의 성적 매기기

## ⏰  **time**

53분

## :pushpin: **Algorithm**

구현

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. score에 (중간*0.35+기말*0.45+과제*0.2)값과 학생 번호를 넣는다.
2. sort를 통해 점수를 내림차순으로 정렬한다.
   이때, compare를 따로 만들어 점수만 내림차순 정렬한다.
3. 각 학점은 N/10명에게 골고루 주어진다. 따라서, N/10명씩 구간을 정해 학점을 출력할 수 있도록 한다.
   그리고, 0부터 N까지 K번의 학생을 찾아 출력한다. 
```cpp
bool compare(pair<double, double> A, pair<double, double> B) {
	return A.first > B.first;
}

sort(score.begin(), score.end(), compare);
```  

## :black_nib: **Review**
- 월요일만해도 못 풀었는데 왜 지금은 풀리지??
- vector<pair<double, double>>를 이용해 학생번호와 점수를 넣었다. 처음에 그냥 vector<double>로 만드니 sort()를 이용해 정렬하기 어려웠다.
