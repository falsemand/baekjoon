#include <bits/stdc++.h>

using namespace std;

int answer, n;
priority_queue<int, vector<int>, greater<int>> pq;

void solution()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        pq.push(num);
    }

    if (pq.size() == 1)
    {
        cout << 0 << "\n";
    }
    else
    {
        while (!pq.empty())
        {
            int sum = pq.top();
            pq.pop();

            if (!pq.empty())
            {
                sum += pq.top();
                pq.pop();

                if (!pq.empty())
                {
                    pq.push(sum);
                }
            }

            answer += sum;
        }

        cout << answer << "\n";
    }
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
