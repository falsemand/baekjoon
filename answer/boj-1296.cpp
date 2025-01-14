#include <bits/stdc++.h>

using namespace std;

string yundoName, answer;
int n, mn = -1;

int check(string& s1, string& s2)
{
    int l = 0, o = 0, v = 0, e = 0;

    for (int i = 0; i < s1.size(); i++)
    {
        switch (s1[i])
        {
        case 'L':
            l++;
            break;
        case 'O':
            o++;
            break;
        case 'V':
            v++;
            break;
        case 'E':
            e++;
            break;
        }
    }

    for (int i = 0; i < s2.size(); i++)
    {
        switch (s2[i])
        {
        case 'L':
            l++;
            break;
        case 'O':
            o++;
            break;
        case 'V':
            v++;
            break;
        case 'E':
            e++;
            break;
        }
    }

    return ((l + o) * (l + v) * (l + e) * (o + v) * (o + e) * (v + e)) % 100;
}

void solution()
{
    cin >> yundoName;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        int temp = check(yundoName, s);

        if(mn < temp)
        {
            mn = temp;
            answer = s;
        }

        else if(mn==temp)
        {
            if(answer > s)
                answer = s;
        }
    }

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