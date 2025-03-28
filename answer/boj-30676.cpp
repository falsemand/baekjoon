#include <bits/stdc++.h>

using namespace std;

int pazang;

void solution()
{
    cin >> pazang;

    if (pazang >= 620 && pazang <= 780)
        cout << "Red\n";
    else if (pazang >= 590 && pazang < 620)
        cout << "Orange\n";
    else if (pazang >= 570 && pazang < 590)
        cout << "Yellow\n";
    else if (pazang >= 495 && pazang < 570)
        cout << "Green\n";
    else if (pazang >= 450 && pazang < 495)
        cout << "Blue\n";
    else if (pazang >= 425 && pazang < 450)
        cout << "Indigo\n";
    else if (pazang >= 380 && pazang < 425)
        cout << "Violet\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}