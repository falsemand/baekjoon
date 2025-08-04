#include <bits/stdc++.h>

using namespace std;

int answer, a, b, n;

void solution()
{
	cin >> a >> b >> n;

	if (a % b == 0)
	{
		cout << 0 << "\n";
		return;
	}

	if (a > b)
	{
		a = a % b;
	}

	for (int i = 0; i < n; i++)
	{
		a *= 10;
		answer = (int)(a / b);
		a = a % b;
	}

	cout << answer << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
