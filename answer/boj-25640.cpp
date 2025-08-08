#include <bits/stdc++.h>

using namespace std;

int answer, n;
string mbti, temp;

void solution()
{
    cin >> mbti;
    cin >> n;

    while (n--)
    {
        cin >> temp;

        if (temp == mbti)
        {
            answer++;
        }
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
