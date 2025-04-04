#include <bits/stdc++.h>

using namespace std;

int answer, n;

void solution()
{
    cin >> n;
    answer = n * (n - 1);

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