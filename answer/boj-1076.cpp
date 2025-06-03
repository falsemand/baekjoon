#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll regi(string s, int type)
{
    if (type)
    {
        if (s == "black")
        {
            return 0;
        }
        else if (s == "brown")
        {
            return 1;
        }
        else if (s == "red")
        {
            return 2;
        }
        else if (s == "orange")
        {
            return 3;
        }
        else if (s == "yellow")
        {
            return 4;
        }
        else if (s == "green")
        {
            return 5;
        }
        else if (s == "blue")
        {
            return 6;
        }
        else if (s == "violet")
        {
            return 7;
        }
        else if (s == "grey")
        {
            return 8;
        }
        else if (s == "white")
        {
            return 9;
        }
    }
    else
    {
        if (s == "black")
        {
            return 1;
        }
        else if (s == "brown")
        {
            return 10;
        }
        else if (s == "red")
        {
            return 100;
        }
        else if (s == "orange")
        {
            return 1000;
        }
        else if (s == "yellow")
        {
            return 10000;
        }
        else if (s == "green")
        {
            return 100000;
        }
        else if (s == "blue")
        {
            return 1000000;
        }
        else if (s == "violet")
        {
            return 10000000;
        }
        else if (s == "grey")
        {
            return 100000000;
        }
        else if (s == "white")
        {
            return 1000000000;
        }
    }
}

void solution()
{
    string s;
    ll answer = 0;

    cin >> s;
    answer += regi(s, 1);

    cin >> s;
    answer = (answer * 10) + regi(s, 1);

    cin >> s;
    answer *= regi(s, 0);

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
