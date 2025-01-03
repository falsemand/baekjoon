#include <bits/stdc++.h>

using namespace std;

int answer, c, h;
string s;
int prevTime = -40, sum;

void solution()
{
    cin >> c >> h;
    vector<int> v;

    for (int i = 0; i < c + h; i++)
    {
        cin >> s;
        int time = stoi(s.substr(0, 2)) * 60 * 60;
        time += stoi(s.substr(3, 2)) * 60;
        time += stoi(s.substr(6, 2));

        v.push_back(time);
    }

    sort(v.begin(), v.end());

    for (int t : v)
    {
        int passTime;

        if (t - prevTime >= 40)
            passTime = 40;
        else
            passTime = t - prevTime;

        sum += passTime;
        prevTime = t;
    }

    answer = 86400 - sum;

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