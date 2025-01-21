#include <bits/stdc++.h>

using namespace std;

int n, k, cnt;
pair<int, int> answer;

int partition(vector<int>& v, int p, int r)
{
    int x = v[r];
    int i = p - 1;

    for (int j = p; j < r;  j++)
    {
        if(v[j] <= x)
        {
            int temp = v[j];
            v[j] = v[++i];
            v[i] = temp;

            cnt++;

            if(k==cnt)
            {
                answer = {v[i], v[j]};
                return -1;
            }
        }
    }

    if(i + 1 != r)
    {
        int temp = v[r];
        v[r] = v[i + 1];
        v[i + 1] = temp;

        cnt++;

        if(k==cnt)
        {
            answer = {v[i + 1], v[r]};
            return -1;
        }
    }

    return i + 1;
}

void quick_sort(vector<int>& v, int p, int r)
{
    int q;

    if(p < r)
    {
        q = partition(v, p, r);

        if(-1 == q)
            return;

        quick_sort(v, p, q - 1);
        quick_sort(v, q + 1, r);
    }
}

void solution()
{
    cin >> n >> k;
    answer = {0, 0};

    vector<int> v(n, 0);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    quick_sort(v, 0, n - 1);

    if(k>cnt)
        cout << -1 << "\n";

    else
        cout << answer.first << " " << answer.second << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}