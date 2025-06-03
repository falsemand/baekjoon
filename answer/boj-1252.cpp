#include <bits/stdc++.h>

using namespace std;

void solution()
{
    string s1, s2;
    cin >> s1 >> s2;

    if (s1.size() < s2.size())
    {
        swap(s1, s2);
    }

    while (s1.size() != s2.size())
    {
        s2 = "0" + s2;
    }

    string bin = "";
    int carry = 0;

    for (int i = s1.size() - 1; i >= 0; i--)
    {
        int b1 = s1[i] == '1' ? 1 : 0;
        int b2 = s2[i] == '1' ? 1 : 0;

        if (b1 + b2 + carry == 3)
        {
            bin += "1";
        }
        else if (b1 + b2 + carry == 2)
        {
            carry = 1;
            bin += "0";
        }
        else if (b1 + b2 + carry == 1)
        {
            carry = 0;
            bin += "1";
        }
        else if (b1 + b2 + carry == 0)
        {
            carry = 0;
            bin += "0";
        }
    }

    if (carry == 1)
    {
        bin += "1";
    }

    while (!bin.empty())
    {
        if (bin[bin.size() - 1] == '0')
        {
            bin.pop_back();
        }
        else
        {
            break;
        }
    }

    if (bin.empty())
    {
        cout << 0 << "\n";
    }
    else
    {
        reverse(bin.begin(), bin.end());
        cout << bin << "\n";
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
