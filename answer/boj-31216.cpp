#include <bits/stdc++.h>

using namespace std;

int t, n;

void solution()
{
    cin >> t;

    vector<int> prime;
    vector<bool> isPrime(318137 + 1);
    isPrime[1] = true;

    for (int i = 2; i * i <= 318137; ++i)
    {
        if (!isPrime[i])
        {
            for (int j = i * i; j <= 318137; j += i)
            {
                isPrime[j] = true;
            }
        }
    }

    for (int i = 2, j = 0; i <= 318137; ++i)
    {
        if (!isPrime[i])
        {
            ++j;
            if (!isPrime[j])
            {
                prime.push_back(i);
            }
        }
    }

    while (t--)
    {
        cin >> n;
        cout << prime[n - 1] << "\n";
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