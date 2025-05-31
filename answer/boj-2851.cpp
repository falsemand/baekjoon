#include <bits/stdc++.h>

using namespace std;

int answer;
int mushrooms[11];

void solution()
{
    for (int i = 1; i <= 10; i++)
    {
        cin >> mushrooms[i];
        mushrooms[i] += mushrooms[i - 1];
    }

    answer = mushrooms[1];

    for (int i = 1; i <= 10; i++)
    {
        if (abs(answer - 100) > abs(mushrooms[i] - 100))
        {
            answer = mushrooms[i];
        }
        else if (abs(answer - 100) == abs(mushrooms[i] - 100))
        {
            answer = max(answer, mushrooms[i]);
        }

        if (mushrooms[i] > 100)
        {
            break;
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
