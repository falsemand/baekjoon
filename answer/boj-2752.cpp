#include <bits/stdc++.h>

using namespace std;

int nums[3];

void solution()
{
    for (int i = 0; i < 3; i++)
        cin >> nums[i];

    sort(nums, nums + 3);

    cout << nums[0] << " " << nums[1] << " " << nums[2] << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
