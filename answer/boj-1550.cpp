#include <bits/stdc++.h>

using namespace std;

int answer;
string s;

void solution()
{
    cin >> s;

    int temp = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        switch (s[i])
        {
        case 'A':
            answer += (10 * pow(16, temp));
            break;
        case 'B':
            answer += (11 * pow(16, temp));
            break;
        case 'C':
            answer += (12 * pow(16, temp));
            break;
        case 'D':
            answer += (13 * pow(16, temp));
            break;
        case 'E':
            answer += (14 * pow(16, temp));
            break;
        case 'F':
            answer += (15 * pow(16, temp));
            break;
        
        default:
            answer += (s[i] - '0') * (pow(16, temp));
            break;
        }

        temp++;
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