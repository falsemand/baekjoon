#include <bits/stdc++.h>

using namespace std;

int answer, n;

void solution()
{
    cin >> n;

    while (n--)
    {
        int num;
        cin >> num;

        answer += num;
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