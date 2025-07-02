#include <bits/stdc++.h>

using namespace std;

int n;

const int BASE = 10000;
const int WIDTH = 4;

struct BigInt 
{
    vector<int> digits;

    BigInt(int x = 0) 
    {
        while (x) 
        {
            digits.push_back(x % BASE);
            x /= BASE;
        }

        if (digits.empty())
            digits.push_back(0);
    }

    void multiply(int x)
    {
        int carry = 0;
        for (int &d : digits)
        {
            long long prod = 1LL * d * x + carry;
            d = prod % BASE;
            carry = prod / BASE;
        }
        while (carry) 
        {
            digits.push_back(carry % BASE);
            carry /= BASE;
        }
    }

    void print() const 
    {
        int n = digits.size();
        printf("%d", digits[n - 1]);

        for (int i = n - 2; i >= 0; --i)
            printf("%0*d", WIDTH, digits[i]);

        printf("\n");
    }
};

void solution()
{
    int n;
    cin >> n;

    BigInt result(1);

    for (int i = 2; i <= n; ++i)
        result.multiply(i);

    result.print();
}


int main(void)
{
    ios::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);

    solution();

    return 0;
}
