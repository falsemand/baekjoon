#include <bits/stdc++.h>

using namespace std;

double answer;
int n, l, h;

void solution()
{
    cin >> n >> l >> h;
    
    vector<double> score(n, 0.0);
    for (int i = 0; i < n; i++)
        cin >> score[i];

    sort(score.begin(), score.end());
    answer = accumulate(score.begin() + l, score.end() - h, 0.0) / (double)(n - (l + h));
    cout.precision(15);
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