#include <bits/stdc++.h>

using namespace std;

int temp;
string s1, s2, s3, s4;

void solution()
{
    cin >> s1 >> s2;

    for (int i = 0; i < s1.size(); i++)
    {
        s3 = s3 + s1[i] + s2[i];
    }

    while (s3.size() != 2)
    {
        for (int i = 0; i < s3.size() - 1; i++)
        {
            s4 = s4 + char('0' + ((s3[i] - '0') + (s3[i + 1] - '0')) % 10);
        }

        s3 = s4;
        s4.clear();
    }

    cout << s3 << "\n";
}


int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
