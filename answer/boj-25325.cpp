#include <bits/stdc++.h>

using namespace std;

int n;
map<string, int> students;

vector<string> split(string s)
{
    vector<string> ret;
    string temp = " ";

    int start = 0;
    int end = s.find(temp);

    while (end != string::npos)
    {
        ret.push_back(s.substr(start, end - start));
        start = end + temp.size();
        end = s.find(temp, start);
    }

    ret.push_back(s.substr(start));

    return ret;
}

void solution()
{
    cin >> n;

    string s1;
    getline(cin, s1);
    getline(cin, s1);

    vector<string> v1 = split(s1);

    for (int i = 0; i < v1.size(); i++)
    {
        students[v1[i]] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        string s2;
        getline(cin, s2);
        vector<string> v2 = split(s2);

        for (int j = 0; j < v2.size(); j++)
        {
            students[v2[j]]++;
        }
    }

    vector<pair<string, int>> answer(students.begin(), students.end());

    sort(answer.begin(), answer.end(), [](pair<string, int> p1, pair<string, int> p2)
         {
        if(p1.second==p2.second)
            return p1.first < p2.first;

        return p1.second > p2.second; });

    for (auto it : answer)
    {
        cout << it.first << " " << it.second << "\n";
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
