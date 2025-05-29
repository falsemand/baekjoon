#include <bits/stdc++.h>

using namespace std;

int answer, n;

void solution()
{
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (int k = 0; k < n; k++)
    {
        long long find = v[k];
        int left = 0, right = n - 1;

        while (left < right)
        {
            int temp = v[left] + v[right];

            if (temp == find)
            {
                if (left != k && right != k)
                {
                    answer++;
                    break;
                }
                else if (left == k)
                {
                    left++;
                }
                else if (right == k)
                {
                    right--;
                }
            }
            else if (temp > find)
            {
                right--;
            }
            else if (temp < find)
            {
                left++;
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
