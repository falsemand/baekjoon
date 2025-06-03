#include <bits/stdc++.h>

using namespace std;

string answer, s;
string bin[8] = {"000", "001", "010", "011", "100", "101", "110", "111"};

void solution()
{
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        int temp = s[i] - '0';

        if (i == 0)
        {
            cout << stoi(bin[temp]);
        }
        else
        {
            cout << bin[temp];
        }
    }

    cout << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
