#include <bits/stdc++.h>

using namespace std;

float w, h;

void solution()
{
    cin >> w >> h;
    cout << fixed;
    cout.precision(1);
    cout << (w * h) / 2.0f << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
