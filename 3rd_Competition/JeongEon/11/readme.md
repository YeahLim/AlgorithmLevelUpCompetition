# [백준] 인간-컴퓨터 상호작 (16139번)

## ⏰  **time**

2시간

## :pushpin: **Algorithm**

누적합

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**

- 누접합이라는 성질을 이용해 입력받는 수를 더한 값으로 배열에 저장. 
```
    	for (int i = 1; i <= S.length(); i++) {
    		for (int j = 1; j <= 26; j++) {
    			number_of_alphabet[i][j] = number_of_alphabet[i - 1][j];
    		}
    		int m = S[i - 1] - 'a';
    		number_of_alphabet[i][m + 1]++;
    	}
```

## :black_nib: **Review**

- 막 저장했다가 어디서 코드 틀린지 몰라서 헤맸다..
