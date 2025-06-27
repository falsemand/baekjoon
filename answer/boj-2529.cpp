#include <bits/stdc++.h>

using namespace std;

int k, check[10];
char a[20];
vector<string> answer;

bool good(char x, char y, char op)
{
    if (x < y && op == '<')
        return true;

    if (x > y && op == '>')
        return true;

    return false;
}

void go(int idx, string num)
{
    if (idx == k + 1)
    {
        answer.push_back(num);
        return;
    }

    for (int i = 0; i <= 9; i++)
    {
        if (check[i])
            continue;

        if (idx == 0 || good(num[idx - 1], i + '0', a[idx - 1]))
        {
            check[i] = 1;
            go(idx + 1, num + to_string(i));
            check[i] = 0;
        }
    }
}

void solution()
{
    cin >> k;

    for (int i = 0; i < k; i++)
        cin >> a[i];

    go(0, "");

    sort(answer.begin(), answer.end());

    cout << answer[answer.size() - 1] << "\n";
    cout << answer[0] << "\n";
}


int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
