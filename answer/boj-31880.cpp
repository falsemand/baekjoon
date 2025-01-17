#include <bits/stdc++.h>

using namespace std;

long long answer;
int n, m;
long long a[13];
long long b[13];

void solution()
{
    cin >> n >> m;

    for (int i = 0; i < n;i++)
        cin >> a[i];
    
    for (int i = 0; i < m;i++)
        cin >> b[i];

    for (int i = 0; i < n; i++)
        answer += a[i];

    for (int i = 0; i < m; i++)
    {
        if(b[i] == 0)
            continue;

        answer *= b[i];
    }

    cout << answer << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}