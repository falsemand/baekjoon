#include <bits/stdc++.h>

using namespace std;

int answer, n;

void solution()
{
    cin >> n;

    vector<int> v(n);
    vector<int> fruit(10, 0);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int left = 0, right = 0;

    while (right < n)
    {
        fruit[v[right++]]++;

        while (10 - count(fruit.begin(), fruit.end(), 0) > 2)
        {
            fruit[v[left++]]--;
        }

        answer = max(answer, right - left);
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
