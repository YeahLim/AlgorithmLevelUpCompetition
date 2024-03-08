// ���� �˰��� ���͵� 7ȸ��
// ���� ��ȣ: 1707��
// ���� �̸�: �̺� �׷���
// �˰���: BFS
// �ۼ���: 24.03.08

#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

#define RED 2
#define BLUE 3

vector<int> vect[20001]; //��������Ʈ
int visited[20001];      //�湮���
int V, E;

/* DFS ���� */
void DFS(int start)
{
    //�湮���� ���̸� RED
    if (visited[start] == 0)
        visited[start] = RED;

    //����� ���� �湮
    for (int i = 0; i < vect[start].size(); i++)
    {
        int idx = vect[start][i];
        if (visited[idx] == 0) //�湮 ���� ���̸�
        {
            //��ҿ� �湮��� ����(��ĥ�ϱ�)
            if (visited[start] == RED)
                visited[idx] = BLUE;
            else if (visited[start] == BLUE)
                visited[idx] = RED;

            //��Һ��� �湮
            DFS(idx);
        }
    }
}

/* �̺б׷��� �˻� */
int check()
{
    //������ ���� ���� ������ �̺б׷��� X
    for (int i = 1; i <= V; i++)
    {
        //����Ȱ� �ڱ��ڽ� ���� ��쿣 size�� 0�̶� ���ư��� �ʴ´�.
        for (int j = 0; j < vect[i].size(); j++)
        {
            int idx = vect[i][j];
            if (visited[i] == visited[idx])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int T;    //�׽�Ʈ���̽�
    int u, v; //��� ���� ����

    cin >> T;
    while (T--)
    {
        cin >> V >> E;
        for (int i = 0; i < E; i++)
        {
            cin >> u >> v;
            vect[u].push_back(v);
            vect[v].push_back(u);
        }


        //�������� �湮�ϱ� ���� 1���� ���� �������� �� �湮�غ�
        for (int i = 1; i <= V; i++)
        {
            if (visited[i] == 0)
                DFS(i);
        }

        if (check() == 0) //�̺б׷������� �˻�
            cout << "NO\n";
        else
            cout << "YES\n";

        memset(visited, 0, sizeof(visited));
        memset(vect, 0, sizeof(vect));
    }
}