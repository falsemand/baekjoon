#include <bits/stdc++.h>

using namespace std;

int t, cnt;
int arr[10], month[13]{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool check(int x)
{
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] && to_string(x).find(i + '0') != string::npos)
        {
            return false;
        }
    }

    return true;
}

void solution()
{
    cin >> t;

    while (t--)
    {
        cnt = 0;

        for (int i = 0; i < 10; i++)
        {
            cin >> arr[i];
        }

        for (int i = 1; i <= 12; i++)
        {
            for (int j = 1; j <= month[i]; j++)
            {
                if (check(i) && check(j))
                {
                    cnt++;
                }
            }
        }

        cout << cnt << "\n";
    }
}


int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
