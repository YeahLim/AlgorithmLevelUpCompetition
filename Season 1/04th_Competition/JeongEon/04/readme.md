# [백준] 잃어버린 괄호 (1541번)

## ⏰  **time**

20분

## :pushpin: **Algorithm**

그리디 알고리즘

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 그리디 알고리즘) 음수(-)연산자가 나올 때 뒤에 있는 숫자를 모두 빼준다.
```
  	for (int i = 0; i <= str.size(); i++) {
  		// 숫자가 아닌, 연산자거나 식이 끝났다면
  		if (str[i] == '-' || str[i] == '+' || i == str.size()) {
  			if (minus == true) {
  				result -= stoi(num);
  			}
  
  			if (minus == false) {
  				result += stoi(num);
  			}
  
  			num = "";
  		}
  		// 숫자라면
  		else {
  			num += str[i];
  		}
  
  		// 음수(-)기호를 만났다면
  		if (str[i] == '-') {	// 마지막에 있는 이유) 숫자 계산을 원활하게 하기 위해서
  			minus = true;
  		}
  	}
```

## :black_nib: **Review**

- 
