#include <bits/stdc++.h>

using namespace std;

long long n;

void solution()
{
    cin >> n;
	if (n == 1)
        cout << 1;

    else if (n <= 3)
        cout << 2;

    else if (n <= 6)
        cout << 3;

    else if (n <= 10)
        cout << 4;
        
    else if (n <= 15)
        cout << 5;

    else if (n <= 21)
        cout << 6;

    else
        cout << (n - 22) / 7 + 7;
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}