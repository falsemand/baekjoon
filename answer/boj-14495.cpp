#include <bits/stdc++.h>

using namespace std;

int n;
long long pibo[117];

void solution()
{
    cin >> n;

    pibo[1] = pibo[2] = pibo[3] = 1;

    for (long long i = 4; i < 117; i++)
    {
        pibo[i] = pibo[i - 1] + pibo[i - 3];
    }

    cout << pibo[n] << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
