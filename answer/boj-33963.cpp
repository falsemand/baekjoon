#include <bits/stdc++.h>

using namespace std;

long long answer, n;

int calc(int n)
{
    return to_string(n).length();
}

void solution()
{
    cin >> n;

    while (calc(n) == calc(n << 1))
    {
        answer++;
        n <<= 1;
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
