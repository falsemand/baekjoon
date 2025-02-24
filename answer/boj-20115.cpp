#include <bits/stdc++.h>

using namespace std;

double answer;
int n;

void solution()
{
    cin >> n;
    vector<int> drink(n, 0);

    for (int i = 0; i < n; i++)
        cin >> drink[i];

    sort(drink.begin(), drink.end());
    answer = drink[n - 1];

    for (int i = 0; i < n - 1; i++)
        answer += drink[i] / 2.0;

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