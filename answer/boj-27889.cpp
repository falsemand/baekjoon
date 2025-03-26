#include <bits/stdc++.h>

using namespace std;

string s;

void solution()
{
    cin >> s;

    if (0 == s.compare("NLCS"))
        cout << "North London Collegiate School\n";
    else if (0 == s.compare("BHA"))
        cout << "Branksome Hall Asia\n";
    else if (0 == s.compare("KIS"))
        cout << "Korea International School\n";
    else if (0 == s.compare("SJA"))
        cout << "St. Johnsbury Academy\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}