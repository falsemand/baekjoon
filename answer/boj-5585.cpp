#include <bits/stdc++.h>

using namespace std;

int answer, n;

void solution()
{
    cin >> n;
    n = 1000 - n;

    while (n != 0)
    {
        if (n >= 500)
        {
            answer += (n / 500);
            n %= 500;
        }
        else if (n >= 100)
        {
            answer += (n / 100);
            n %= 100;
        }
        else if (n >= 50)
        {
            answer += (n / 50);
            n %= 50;
        }
        else if (n >= 10)
        {
            answer += (n / 10);
            n %= 10;
        }
        else if (n >= 5)
        {
            answer += (n / 5);
            n %= 5;
        }
        else
        {
            answer += n;
            n = 0;
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
