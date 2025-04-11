#include <bits/stdc++.h>

using namespace std;

int maxA, maxB, maxC;
int visited[201][201][201];

vector<int> v;

void go(int A, int B, int C)
{
    visited[A][B][C] = 1;

    if (A == 0)
    {
        auto it = find(v.begin(), v.end(), C);

        if (it == v.end())
            v.push_back(C);
    }

    int storeA = A, storeB = B, storeC = C;

    // A -> B
    {
        int giveB = maxB - B;

        if (giveB <= A)
        {
            A -= giveB;
            B += giveB;
        }

        else
        {
            B += A;
            A = 0;
        }

        if (!visited[A][B][C])
            go(A, B, C);
    }

    A = storeA;
    B = storeB;
    C = storeC;

    // A -> C
    {
        int giveC = maxC - C;

        if (giveC <= A)
        {
            A -= giveC;
            C += giveC;
        }

        else
        {
            C += A;
            A = 0;
        }

        if (!visited[A][B][C])
            go(A, B, C);
    }

    A = storeA;
    B = storeB;
    C = storeC;

    // B -> A
    {
        int giveA = maxA - A;

        if (giveA <= B)
        {
            B -= giveA;
            A += giveA;
        }

        else
        {
            A += B;
            B = 0;
        }

        if (!visited[A][B][C])
            go(A, B, C);
    }

    A = storeA;
    B = storeB;
    C = storeC;

    // B -> C
    {
        int giveC = maxC - C;

        if (giveC <= B)
        {
            B -= giveC;
            C += giveC;
        }

        else
        {
            C += B;
            B = 0;
        }

        if (!visited[A][B][C])
            go(A, B, C);
    }

    // C -> A
    {
        int giveA = maxA - A;

        if (giveA <= C)
        {
            C -= giveA;
            A += giveA;
        }

        else
        {
            A += C;
            C = 0;
        }

        if (!visited[A][B][C])
            go(A, B, C);
    }

    A = storeA;
    B = storeB;
    C = storeC;

    // C -> B
    {
        int giveB = maxB - B;

        if (giveB <= C)
        {
            C -= giveB;
            B += giveB;
        }

        else
        {
            B += C;
            C = 0;
        }

        if (!visited[A][B][C])
            go(A, B, C);
    }
}

void solution()
{
    v = vector<int>();

    cin >> maxA >> maxB >> maxC;

    go(0, 0, maxC);

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

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
