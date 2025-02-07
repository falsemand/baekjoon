#include <bits/stdc++.h>

using namespace std;

int answer, n;

struct Cuboid
{
    int x1, y1, z1;
    int x2, y2, z2;
};

void solution()
{
    cin >> n;
    vector<Cuboid> Cubes;
    for (int i = 0; i < n; i++)
    {
        Cuboid tCube;
        cin >> tCube.x1 >> tCube.y1 >> tCube.z1 >> tCube.x2 >> tCube.y2 >> tCube.z2;

        Cubes.push_back(tCube);
    }

    Cuboid tCube;
    {
        tCube.x1 = 0;
        tCube.y1 = 0;
        tCube.z1 = 0;

        tCube.x2 = 1001;
        tCube.y2 = 1001;
        tCube.z2 = 1001;
    }

    for (int i = 0; i < n; i++)
    {
        tCube.x1 = max(tCube.x1, Cubes[i].x1);
        tCube.x2 = min(tCube.x2, Cubes[i].x2);

        tCube.y1 = max(tCube.y1, Cubes[i].y1);
        tCube.y2 = min(tCube.y2, Cubes[i].y2);

        tCube.z1 = max(tCube.z1, Cubes[i].z1);
        tCube.z2 = min(tCube.z2, Cubes[i].z2);
    }

    answer = max(0, (tCube.x2 - tCube.x1)) * max(0, (tCube.y2 - tCube.y1)) * max(0, (tCube.z2 - tCube.z1));

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