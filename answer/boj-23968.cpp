#include <bits/stdc++.h>

using namespace std;

int n, k, cnt;
int a[10001], answer[2];

void solution()
{
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                cnt++;

                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;

                if (cnt == k)
                {
                    answer[0] = a[j];
                    answer[1] = a[j + 1];
                }
            }
        }
    }

    if (cnt < k)
    {
        cout << -1 << "\n";
    }
    else
    {
        cout << answer[0] << " " << answer[1] << "\n";
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
