#include <bits/stdc++.h>

using namespace std;

string s;

void solution()
{
    cin >> s;

    if(!s.compare("SONGDO"))
        cout << "HIGHSCHOOL\n";
    else if(!s.compare("CODE"))
        cout << "MASTER\n";
    else if(!s.compare("2023"))
        cout << "0611\n";
    else if(!s.compare("ALGORITHM"))
        cout << "CONTEST\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}