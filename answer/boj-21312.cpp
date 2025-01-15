#include <bits/stdc++.h>

using namespace std;

int answer;

void solution()
{
    vector<int> v(3, 0);
    cin >> v[0] >> v[1] >> v[2];

    answer = v[0] * v[1] * v[2];

    for (int i = 0; i < 3; i++)
    {
        if(answer % 2 == 0 && v[i] % 2 != 0)
            answer = v[i];

        else if(answer % 2 != 0 && v[i] % 2 != 0)
        {
            if(v[i] > answer)
                answer = v[i];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            int num = v[i] * v[j];

            if(answer % 2 == 0 && num % 2 != 0)
                answer = num;
            
            else if(answer % 2 != 0 && num % 2 != 0)
            {
                if(num > answer)
                    answer = num;
            }
        }
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