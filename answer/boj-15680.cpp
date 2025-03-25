#include <bits/stdc++.h>

using namespace std;

int n;

void solution()
{
    cin >> n;

    switch (n)
    {
    case 0:
        cout << "YONSEI\n";
        break;
    case 1:
        cout << "Leading the Way to the Future\n";
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