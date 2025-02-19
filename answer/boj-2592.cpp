#include <bits/stdc++.h>

using namespace std;

int avg;
map<int, int> m;

void solution()
{
    for (int i = 0; i < 10; i++)
    {
        int num;
        cin >> num;

        avg += num;
        m[num]++;
    }

    avg /= 10;
    auto answer = max_element(m.begin(), m.end(), [](const pair<int, int> p1, const pair<int, int> p2)
    {
        return p1.second < p2.second;
    });

    cout << avg << "\n";
    cout << (*answer).first << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}