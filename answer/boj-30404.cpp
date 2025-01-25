#include <bits/stdc++.h>

using namespace std;

int answer, n, k, last;

void solution()
{
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        if(0 == i)
            last = num;
        
        if(last + k < num)
        {
            answer++;
            last = num;
        }
    }

    answer++;

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