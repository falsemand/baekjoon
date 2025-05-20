#include <bits/stdc++.h>

using namespace std;

string A, B, answer;

string Add(string a, string b)
{
    string ret;

    int temp = max(a.size(), b.size());

    a = string(temp - a.size(), '0') + a;
    b = string(temp - b.size(), '0') + b;

    int carry = 0;

    for (int i = temp - 1; i >= 0; i--)
    {
        int sum = (a[i] - '0') + (b[i] - '0') + carry;
        carry = sum / 10;
        ret += (sum % 10) + '0';
    }

    if (carry > 0)
    {
        ret += carry + '0';
    }

    reverse(ret.begin(), ret.end());

    return ret;
}

void solution()
{
    cin >> A >> B;
    answer = Add(A, B);
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
