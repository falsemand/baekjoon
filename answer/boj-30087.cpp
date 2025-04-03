#include <bits/stdc++.h>

using namespace std;

int n;

void solution()
{
    cin >> n;

    while (n--)
    {
        string s;
        cin >> s;

        if (!s.compare("Algorithm"))
        {
            cout << "204\n";
        }

        else if (!s.compare("DataAnalysis"))
        {
            cout << "207\n";
        }

        else if (!s.compare("ArtificialIntelligence"))
        {
            cout << "302\n";
        }

        else if (!s.compare("CyberSecurity"))
        {
            cout << "B101\n";
        }

        else if (!s.compare("Network"))
        {
            cout << "303\n";
        }

        else if (!s.compare("Startup"))
        {
            cout << "501\n";
        }

        else if (!s.compare("TestStrategy"))
        {
            cout << "105\n";
        }
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