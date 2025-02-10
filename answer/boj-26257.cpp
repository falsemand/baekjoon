#include <bits/stdc++.h>

using namespace std;

int n, m, q;
vector<int> ptr;
vector<int> obj;

void solution()
{
    cin >> n >> m >> q;
    obj = vector<int>(n + 1, 0);
    ptr = vector<int>(m + 1, 0);

    for (int i = 1; i <= m; i++)
    {
        int objNum;
        cin >> objNum;

        if(0 != objNum)
        {
            ptr[i] = objNum;
            obj[objNum]++;
        }
    }

    for (int i = 0; i < q; i++)
    {
        string cmd;

        cin >> cmd;

        if(!cmd.compare("assign"))
        {
            int x, y;
            cin >> x >> y;

            obj[ptr[x]]--;
            obj[ptr[y]]++;

            obj[0] = 0;

            ptr[x] = ptr[y];
        }

        else if(!cmd.compare("swap"))
        {
            int x, y;
            cin >> x >> y;

            int temp = ptr[x];
            ptr[x] = ptr[y];
            ptr[y] = temp;
        }

        else if(!cmd.compare("reset"))
        {
            int x;
            cin >> x;

            obj[ptr[x]]--;
            obj[0] = 0;
            ptr[x] = 0;
        }
    }

    int k = 0;
    vector<int> mem;

    for (int i = 1; i <= n; i++)
    {
        if(0 != obj[i])
        {
            k++;
            mem.push_back(i);
        }
    }

    cout << k << "\n";
    for (int i = 0; i < mem.size(); i++)
        cout << mem[i] << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}