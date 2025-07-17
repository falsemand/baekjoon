#include <bits/stdc++.h>

using namespace std;

int n;
queue<char> q;

void solution()
{
    q.push('S');
    q.push('c');
    q.push('i');
    q.push('C');
    q.push('o');
    q.push('m');
    q.push('L');
    q.push('o');
    q.push('v');
    q.push('e');

    cin >> n;

    int cnt = n % 10;

    for (int i = 0; i < cnt; i++)
    {
        char c = q.front();
        q.pop();
        q.push(c);
    }

    for (int i = 0; i < 10; i++)
    {
        cout << q.front();
        q.pop();
    }

    cout << "\n";
}


int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
