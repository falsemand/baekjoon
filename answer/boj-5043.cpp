#include <bits/stdc++.h>

using namespace std;

long long n, b, sum = 1;

void solution()
{
	cin >> n >> b;

	for (int i = 1; i <= b; i++)
	{
		sum += (1LL << i);
	}

	cout << (sum >= n ? "yes\n" : "no\n");
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
