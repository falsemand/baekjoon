#include <bits/stdc++.h>

using namespace std;

int answer = INT_MIN, n;
vector<int> nums;
vector<char> opers;
string s;

int oper(char a, int b, int c)
{
    if (a == '+')
        return b + c;
    if (a == '-')
        return b - c;
    if (a == '*')
        return b * c;
}

void go(int here, int num)
{
    if (here == nums.size() - 1)
    {
        answer = max(answer, num);
        return;
    }

    go(here + 1, oper(opers[here], num, nums[here + 1]));

    if (here + 2 <= nums.size() - 1)
    {
        int temp = oper(opers[here + 1], nums[here + 1], nums[here + 2]);
        go(here + 2, oper(opers[here], num, temp));
    }
}

void solution()
{
    cin >> n;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            nums.push_back(s[i] - '0');
        else
            opers.push_back(s[i]);
    }

    go(0, nums[0]);

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
