#include <bits/stdc++.h>

using namespace std;

void solution()
{
    time_t t = time(NULL);
    struct tm *tt = localtime(&t);

    cout << tt->tm_year + 1900 << "\n";
    cout << tt->tm_mon + 1 << "\n";
    cout << tt->tm_mday << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
