#include <bits/stdc++.h>

using namespace std;

long long n, t;
int s, i, c;

void solution()
{
    cin >> n >> t;

    vector<long long> v;

    for (int j = 0; j < n;j++)
    {
        cin >> s >> i >> c;

        for (int k = 0; k < c; k++)
        {
            long long temp = s + i * k;
            v.push_back(temp);
        }
    }

    sort(v.begin(), v.end());

    int left = 0, right = v.size();

    while(left < right)
    {
        int mid = (left + right) / 2;

        if(v[mid] >= t)
            right = mid;
        
        else
            left = mid + 1;
    }

    if(0 > v[left] - t)
        cout << -1 << "\n";

    else
        cout << v[left] - t << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}