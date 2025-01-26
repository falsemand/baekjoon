#include <bits/stdc++.h>

using namespace std;

long long answer, n, k, pos, cnt;

void solution()
{
    cin >> n >> k;
    vector<long long> checkPlus;
    vector<long long> checkMius;

    for (long long i = 0; i < n; i++)
    {
        long long check;
        cin >> check;
        
        if(check > 0)
            checkPlus.push_back(check);
        else
            checkMius.push_back(check);
    }
    
    sort(checkPlus.begin(), checkPlus.end(), greater<long long>());
    sort(checkMius.begin(), checkMius.end());

    cnt = 0;
    for (long long i = 0; i < checkMius.size(); i++)
    {
        if(0 == cnt)
        {
            answer += (2 * abs(checkMius[i]));
            cnt++;
        }

        else if(k > cnt)
            cnt++;

        if(k == cnt)
            cnt = 0;
    }

    cnt = 0;
    for (long long i = 0; i < checkPlus.size(); i++)
    {
        if(0 == cnt)
        {
            answer += (2 * checkPlus[i]);
            cnt++;
        }
        
        else if(k > cnt)
            cnt++;

        if(k == cnt)
            cnt = 0;
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