#include <bits/stdc++.h>

using namespace std;

string answer = "";
int n, h, w;
string note[11];

void solution()
{
    cin >> n >> h >> w;

    for (int i = 0; i < h;i++)
        cin >> note[i];

    for (int i = 0; i < note[0].size(); i++)
    {
        for (int j = 0; j < h; j++)
        {
            if('?' != note[j][i])
            {
                char c = note[j][i];

                for (int k = 0; k < h; k++)
                    note[k][i] = c;

                break;
            }
        }
    }
    
    string s = note[0];
    for (int i = 0; i < s.size(); i += w)
    {
        bool flag = false;

        for (int j = i; j < i + w; j++)
        {
            if('?' != s[j])
            {
                flag = true;
                answer += s[j];
                break;
            }
        }

        if(!flag)
            answer += "?";
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