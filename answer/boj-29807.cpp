#include <bits/stdc++.h>

using namespace std;

int answer, t;
int score[5];

void solution()
{
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> score[i];
    }

    if (score[0] > score[2])
    {
        answer = (score[0] - score[2]) * 508;
    }
    else
    {
        answer = (score[2] - score[0]) * 108;
    }

    if (score[1] > score[3])
    {
        answer += ((score[1] - score[3]) * 212);
    }
    else
    {
        answer += ((score[3] - score[1]) * 305);
    }

    if (score[4])
    {
        answer += (score[4] * 707);
    }

    answer *= 4763;

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
