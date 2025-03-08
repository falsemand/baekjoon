#include <bits/stdc++.h>

using namespace std;

int k;

void solution()
{
    cin >> k;
    string answer = "AKARAKA";

    if (1 == k)
        cout << answer << "\n";
    else
    {
        for (int i = 1; i < k; i++)
            answer += "RAKA";

        cout << answer << "\n";
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