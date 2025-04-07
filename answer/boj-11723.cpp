#include <bits/stdc++.h>

using namespace std;

int m;
int numSet[21];

void solution()
{
    cin >> m;

    while (m--)
    {
        string cmd;
        cin >> cmd;

        if (cmd.compare("add") == 0)
        {
            int x;
            cin >> x;

            numSet[x] = 1;
        }

        else if (cmd.compare("remove") == 0)
        {
            int x;
            cin >> x;

            numSet[x] = 0;
        }

        else if (cmd.compare("check") == 0)
        {
            int x;
            cin >> x;

            if (numSet[x] == 1)
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }

        else if (cmd.compare("toggle") == 0)
        {
            int x;
            cin >> x;

            if (numSet[x] == 1)
                numSet[x] = 0;
            else
                numSet[x] = 1;
        }

        else if (cmd.compare("all") == 0)
        {
            for (int i = 1; i <= 20; i++)
                numSet[i] = 1;
        }

        else if (cmd.compare("empty") == 0)
        {
            for (int i = 1; i <= 20; i++)
                numSet[i] = 0;
        }
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
