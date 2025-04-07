#include <bits/stdc++.h>

using namespace std;

int answer, n;

void solution()
{
    cin >> n;

    vector<int> v(n, 0);
    vector<int> psum(n, 0);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    psum[0] = v[0];
    psum[1] = v[0] + v[1];

    for (int i = 2; i < n; i++)
    {
        psum[i] = v[i] + psum[i - 1];
    }

    answer = accumulate(psum.begin(), psum.end(), 0);

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
