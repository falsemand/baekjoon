#include <bits/stdc++.h>

using namespace std;

int answer = 11;
int r, c;
char m[10][10] 
{
    {'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o'},
    {'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o'},
    {'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o'},
    {'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o'},
    {'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o'},
    {'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o'},
    {'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o'},
    {'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o'},
    {'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o'},
    {'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o'}
};

void solution()
{
    cin >> r >> c;

    for (int i = 0; i < 10; i++)
    {
        string s;
        cin >> s;

        for (int j = 0; j < s.size(); j++)
        {
            if('o' == s[j])
            {
                for (int a = 0; a < 10; a++)
                    m[i][a] = 'x';

                for (int a = 0; a < 10; a++)
                    m[a][j] = 'x';
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if('o' == m[i][j])
            {
                int distance = abs((i + 1) - r) + abs((j + 1) - c);

                answer = min(distance, answer);
            }
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