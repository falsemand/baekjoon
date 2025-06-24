#include <bits/stdc++.h>

using namespace std;

string a[301];
int visited[301][301];
int n, m, x11, y11, x22, y22;
const int dy[4] = {0, -1, 0, 1};
const int dx[4] = {-1, 0, 1, 0};
queue<int> q;

void solution()
{
    cin >> n >> m;
    cin >> y11 >> x11 >> y22 >> x22;

    y11--;
    x11--;
    y22--;
    x22--;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    q.push(1000 * y11 + x11);
    visited[y11][x11] = 1;

    int cnt = 0;

    while(a[y22][x22] != '0'){ 
        cnt++;
        queue<int> temp; 

        while(q.size())
        {
            int y = q.front() / 1000; 
            int x = q.front() % 1000;

            q.pop();

            for(int i = 0; i < 4; i++)
            {
                int ny = y + dy[i]; 
                int nx = x + dx[i];

                if(ny < 0 || ny >= n || nx < 0 || nx >= m || visited[ny][nx])
                    continue; 

                visited[ny][nx] = cnt;

                if(a[ny][nx] != '0')
                {
                    a[ny][nx] = '0'; 
                    temp.push(1000 * ny + nx);
                }
                else 
                    q.push(1000 * ny + nx); 
            }
        }
        q = temp;  
    }
    cout << visited[y22][x22] << "\n";
}


int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
