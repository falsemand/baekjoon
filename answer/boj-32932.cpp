#include <bits/stdc++.h>

using namespace std;

int n, k, x, y;

void solution()
{
    cin >> n >> k;
    vector<pair<int, int>> v;

    while(n--)
    {
        cin >> x >> y;
        v.push_back({x, y});
    }

    x = 0;
    y = 0;

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        int nx = x, ny = y;

        switch (s[i])
        {
            case 'U':
                ny += 1;
                break;
            case 'D':
                ny -= 1;
                break;
            case 'R':
                nx += 1;
                break;
            case 'L':
                nx -= 1;
                break;
        }

        bool flag = true;

        for(auto pi : v)
        {
            if(pi.first == nx && pi.second == ny)
            {
                flag = false;
                break;
            }
        }

        if(flag)
        {
            x = nx;
            y = ny;
        }
    }

    cout << x << " " << y << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}