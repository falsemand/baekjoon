#include <bits/stdc++.h>

using namespace std;

char c;

void solution()
{
    cin >> c;

    switch (c)
    {
    case 'M':
        cout << "MatKor\n";
        break;
    case 'W':
        cout << "WiCys\n";
        break;
    case 'C':
        cout << "CyKor\n";
        break;
    case 'A':
        cout << "AlKor\n";
        break;
    case '$':
        cout << "$clear\n";
        break;
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