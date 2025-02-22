#include <bits/stdc++.h>

using namespace std;

int h1, h2, m1, m2, s1, s2;
int h, m, s;

void solution()
{
    for (int i = 0; i < 3; i++)
    {
        cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;

        if(s2 < s1)
        {
            m2--;
            s2 += 60;
            s = s2 - s1;
        }

        else
            s = s2 - s1;
        
        if(m2 < m1)
        {
            h2--;
            m2 += 60;
            m = m2 - m1;
        }
    
        else
            m = m2 - m1;

        h = h2 - h1;

        cout << h << " " << m << " " << s << "\n";
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