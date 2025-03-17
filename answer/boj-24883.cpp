#include <bits/stdc++.h>

using namespace std;

char c;

void solution()
{
    cin >> c;

    switch (c)
    {
        case 'N':
        case 'n':
            cout << "Naver D2\n";
            break;
        
        default:
            cout << "Naver Whale\n";
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