#include <bits/stdc++.h>

using namespace std;

string s;

bool check(string s)
{
    for (int i = 0; i < s.size() / 2; i++)
    {
        if(s[i] != s[s.size() - 1 - i])
            return false;
    }

    return true;
}

void solution()
{
    while(true)
    {
        int answer = 0;
        cin >> s;

        if("0" == s)
            break;
        
        while(!check(s))
        {
            int num = stoi(s);
            string temp = to_string(++num);
            string zeros = "";
            for (int i = 0; i < s.size() - temp.size(); i++)
                zeros += "0";

            s = zeros + temp;
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