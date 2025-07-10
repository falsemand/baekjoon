#include <bits/stdc++.h>

using namespace std;

int t;
string s1, s2;

void solution()
{
    cin >> t;

    while (t--)
    {
        cin >> s1;
        cin >> s2;

        int answer = 0;

        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] != s2[i])
            {
                answer++;
            }
        }

        cout << "Hamming distance is " << answer << ".\n";
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
