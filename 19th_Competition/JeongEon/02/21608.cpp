// 19ȸ�� ���� �˰��� ���͵�
// ���� ��� 5
// 21608. ��� �ʵ��б�

#include <iostream>
#include <vector>

using namespace std;

int n;
vector<vector<int> > ary;
int dir[4][2] = { {0, 1}, {0, -1}, {1, 0}, {-1, 0} };
void find_blank(int idx, vector<int> p[]) {
    {
        int v[n][n];
        int f[n][n];
        int max = -1, mrow = 0, mcol = 0, fcnt = 0, cnt = 0; //max���� �� -1��?
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (ary[i][j] != 0) //�̹� ����ִ� ĭ�� Ž���� �ʿ䰡 ����.
                    continue;
                cnt = 0;
                fcnt = 0;
                for (int d = 0; d < 4; d++)
                {
                    int nx = i + dir[d][0], ny = j + dir[d][1];
                    if (nx < 0 || nx >= n || ny < 0 || ny >= n)
                        continue;
                    if (ary[nx][ny] == 0)
                        cnt++;
                    // cout<<"�����ϴ� ��� ã�� "<<endl;
                    for (int k = 0; k < 4; k++) {
                        if (ary[nx][ny] == p[idx][k])// �����ϴ� ���϶�.
                            fcnt++;
                    }
                }
                v[i][j] = cnt;  // ����ĭ��
                f[i][j] = fcnt; // �����ϴ� ��� ĭ��
                if (max < fcnt)
                    max = fcnt, mrow = i, mcol = j;
                else if (max == fcnt)
                { // ���� �����ϴ� ��� ĭ���� �����ϴٸ�
                    if (v[i][j] > v[mrow][mcol])// ����ĭ���� ����ִ� ĭ���� ����.
                        mrow = i, mcol = j;
                    else if (v[i][j] == v[mrow][mcol])
                    { // ����ĭ���� ���ٸ�, i�� �����Ÿ� ����. j�� �����Ÿ� ����.
                        if (i < mrow) // i�� �۴ٸ� �ٲ���.
                            mrow = i, mcol = j;
                        else if (i == mrow) { // i�� ������� j�� �����ɷ� �ٲ���.
                            if (j < mcol)
                                mrow = i, mcol = j;
                        }
                    }
                }
            }
        }
        ary[mrow][mcol] = idx;
    }
}
int main() {
    cin >> n;
    ary.resize(n, vector<int>(n, 0));
    int score[5];
    score[0] = 0, score[1] = 1, score[2] = 10, score[3] = 100, score[4] = 1000;
    vector<int> p[n * n + 1];
    int idx, a;
    for (int i = 0; i < n * n; i++)
    {
        cin >> idx;
        for (int j = 0; j < 4; j++)
        {
            cin >> a;
            p[idx].push_back(a);
        }
        find_blank(idx, p);
    }
    int answer = 0, value = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            value = ary[i][j];
            cnt = 0;
            for (int k = 0; k < 4; k++) //����ĭ �� Ž��
            {
                int nx = i + dir[k][0], ny = j + dir[k][1];
                if (nx < 0 || nx >= n || ny < 0 || ny >= n)
                    continue;
                for (int z = 0; z < 4; z++) //����ĭ �����ϴ� ��� Ž��.
                {
                    if (ary[nx][ny] == p[value][z])
                        cnt++;
                }
            }
            answer += score[cnt];
        }
    }
    cout << answer << endl;
}

void find_blank(int idx, vector<int> p[])
{
    int v[n][n];
    int f[n][n];
    int max = -1, mrow = 0, mcol = 0, fcnt = 0, cnt = 0; //max���� �� -1��?
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ary[i][j] != 0) //�̹� ����ִ� ĭ�� Ž���� �ʿ䰡 ����.
                continue;
            cnt = 0;
            fcnt = 0;
            for (int d = 0; d < 4; d++)
            {
                int nx = i + dir[d][0], ny = j + dir[d][1];
                if (nx < 0 || nx >= n || ny < 0 || ny >= n)
                    continue;
                if (ary[nx][ny] == 0)
                    cnt++;
                // cout<<"�����ϴ� ��� ã�� "<<endl;
                for (int k = 0; k < 4; k++) {
                    if (ary[nx][ny] == p[idx][k])// �����ϴ� ���϶�.
                        fcnt++;
                }
            }
            v[i][j] = cnt;  // ����ĭ��
            f[i][j] = fcnt; // �����ϴ� ��� ĭ��
            if (max < fcnt)
                max = fcnt, mrow = i, mcol = j;
            else if (max == fcnt)
            { // ���� �����ϴ� ��� ĭ���� �����ϴٸ�
                if (v[i][j] > v[mrow][mcol])// ����ĭ���� ����ִ� ĭ���� ����.
                    mrow = i, mcol = j;
                else if (v[i][j] == v[mrow][mcol])
                { // ����ĭ���� ���ٸ�, i�� �����Ÿ� ����. j�� �����Ÿ� ����.
                    if (i < mrow) // i�� �۴ٸ� �ٲ���.
                        mrow = i, mcol = j;
                    else if (i == mrow) { // i�� ������� j�� �����ɷ� �ٲ���.
                        if (j < mcol)
                            mrow = i, mcol = j;
                    }
                }
            }
        }
    }
    ary[mrow][mcol] = idx;
}