#include <bits/stdc++.h>

using namespace std;

int m, n, x, y;
int direction = 1;
bool flag = true;

void solution()
{
    cin >> m >> n;

    while (n--)
    {
        string s;
        int num;

        cin >> s >> num;

        if (s == "MOVE")
        {
            switch (direction)
            {
            case 0:
                y += num;
                break;
            case 1:
                x += num;
                break;
            case 2:
                y -= num;
                break;
            case 3:
                x -= num;
                break;
            default:
                break;
            }
        }

        else if (s == "TURN")
        {
            if (num == 0)
            {
                direction--;

                if (direction < 0)
                    direction = 3;
            }

            else if (num == 1)
            {
                direction++;

                if (direction > 3)
                    direction = 0;
            }
        }

        if (flag && x < 0 || x > m || y < 0 || y > m)
            flag = false;
    }

    if (flag)
        cout << x << " " << y << "\n";
    else
        cout << -1 << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}