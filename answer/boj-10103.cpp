#include <bits/stdc++.h>

using namespace std;

int n, c = 100, s = 100;

void solution()
{
    cin >> n;

    while(n--)
    {
        int dice1, dice2;

        cin >> dice1 >> dice2;

        if(dice1 > dice2)
            s -= dice1;
        
        else if(dice1 < dice2)
            c -= dice2;
    }

    cout << c << "\n";
    cout << s << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}