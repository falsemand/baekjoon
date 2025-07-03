#include <bits/stdc++.h>

using namespace std;

int answer, n, a, b, c;

int gcd(int a, int b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

void solution()
{
    cin >> n;

    if (n == 2)
    {
        cin >> a >> b;
        answer = gcd(a, b);
    }
    else
    {
        cin >> a >> b >> c;
        answer = gcd(a, gcd(b, c));
    }

    for (int i = 1; i <= answer; i++)
    {
        if (answer % i == 0)
        {
            cout << i << "\n";
        }
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
