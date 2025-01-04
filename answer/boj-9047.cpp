#include <bits/stdc++.h>

using namespace std;

int t;

void solution()
{
    cin >> t;

    while (t--)
    {
        int num;
        cin >> num;

        int answer = 0;
        string s = to_string(num);

        while (s != "6174")
        {
            while (s.size() != 4)
            {
                s = "0" + s;
            }

            sort(s.begin(), s.end());
            int mn = stoi(s);

            reverse(s.begin(), s.end());
            int mx = stoi(s);

            s = (to_string(abs(mx - mn)));
            answer++;
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