#include <bits/stdc++.h>

using namespace std;

int t;

void solution()
{
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;

        string odd = "";
        string even = "";

        for (int i = 0; i < s.size(); i++)
        {
            if(0 == i % 2)
                odd += s[i];
            else
                even += s[i];
        }

        if(1== s.size() % 2)
        {
            string temp = odd;
            odd += even;
            even += temp;
        }

        cout << odd << "\n";
        cout << even << "\n";
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