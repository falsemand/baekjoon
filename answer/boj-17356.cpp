#include <bits/stdc++.h>

using namespace std;

double a, b, m;

void solution()
{
	cin >> a >> b;
	m = (b - a) / 400;
	
	cout << fixed;
	cout.precision(20);
	cout << 1 / (1 + pow(10, m)) << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
