#include <bits/stdc++.h>

using namespace std;

int n, a, b, x;

void solution()
{
    cin >> n;
    
    while (n--)
    {
        cin >> a >> b >> x;
        cout<<a * (x - 1) + b << "\n";
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