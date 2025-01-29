#include <bits/stdc++.h>

using namespace std;

map<int, int> answer;
int p, t, num;
int arr[20];

void solution()
{
    cin >> p;

    while(p--)
    {
        cin >> t;
        
        for (int i = 0; i < 20; i++)
            cin >> arr[i];

        int cnt = 0;
        for (int i = 0; i < 19; i++)
        {
            for (int j = i; j < 20; j++)
            {
                if(arr[i] > arr[j])
                    cnt += 1;
            }
        }

        cout << t << " " << cnt << "\n";
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