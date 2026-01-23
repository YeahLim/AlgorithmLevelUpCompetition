# [백준 - 실버 3] 터렛

## ⏰  **time**
1시간

## :pushpin: **Algorithm**
DP

## ⏲️**Time Complexity**
$O(NlogN)$

## :round_pushpin: **Logic**
- 원으로 거리를 찾아서 그렇게 계산한다
```cpp
for(int i = 0; i < num; i++)
    {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        d = (x1-x2) * (x1-x2) + (y1-y2) * (y1-y2);
        cond1 = (r1-r2) * (r1-r2);
        cond2 = (r1+r2) * (r1+r2);
        if(d == 0)
        {
            if(cond1 == 0)
                cout << "-1" << '\n';
            else
                cout << "0" << '\n';
        }
        else if (d == cond1 || d == cond2)
            cout << "1" << '\n';
        else if (cond1 < d && d < cond2)
            cout << "2" << '\n';
        else
            cout << "0" << '\n';
    }
```

## :black_nib: **Review**
- 진짜 모르겠다.. 그래도 다른 사람꺼 찾아봤덩