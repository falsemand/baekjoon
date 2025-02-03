#include <bits/stdc++.h>

using namespace std;

int n;

void solution()
{
    cin >> n;
    deque<int> dq;

    for (int i = 1; i <= n;i++)
        dq.push_back(i);
    
    for (int i = 1; i <= n - 1;i++)
    {
        long long sq = pow(i, 3);
        sq--;
        sq %= (n - i + 1);

        while(sq--)
        {
            dq.push_back(dq.front());
            dq.pop_front();
        }

        dq.pop_front();
    }

    cout << dq.front() << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}