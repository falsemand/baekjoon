#include <bits/stdc++.h>

using namespace std;

int answer, n, m;

void solution()
{
    cin >> n >> m;
    
    vector<int> box(n);
    vector<int> book(m);

    for (int i = 0; i < n; i++)
        cin >> box[i];
    
    for (int i = 0; i < m; i++)
        cin >> book[i];

    int idx = 0;
    for (int i = 0; i < m; i++)
    {
        if(box[idx]>= book[i])
        {
            box[idx] -= book[i];
        }

        else
        {
            idx++;
            i--;
        }
    }

    answer = accumulate(box.begin(), box.end(), 0);

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