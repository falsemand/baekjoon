#include <bits/stdc++.h>

using namespace std;

pair<int, int> pigalcup[5];
int n;

void solution()
{
	pigalcup[0] = {2024, 8};
	pigalcup[1] = {2025, 3};
	pigalcup[2] = {2025, 10};
	pigalcup[3] = {2026, 5};
	pigalcup[4] = {2026, 12};

	cin >> n;

	cout << pigalcup[n - 1].first << " " << pigalcup[n - 1].second << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
