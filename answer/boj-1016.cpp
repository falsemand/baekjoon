#include <bits/stdc++.h>

using namespace std;

#define MAX 1000001

int answer;
long long mn, mx;
long long che[MAX];

void solution()
{
    cin >> mn >> mx;

    for (long long i = 2; i * i <= mx; i++)
    {
        long long x = mn / (i * i);

        if (mn % (i * i) != 0)
            x++;

        while (x * i * i <= mx)
        {
            che[x * i * i - mn] = 1;
            x++;
        }
    }

    for (long long i = 0; i <= mx - mn; i++)
    {
        if (che[i] == 0)
            answer++;
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
