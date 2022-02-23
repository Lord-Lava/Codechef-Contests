#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const int mod = 1e9 + 7;

bool myCompare(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.first == p2.first)
    {
        return p1.second < p2.second;
    }
    return p1.first > p2.first;
}

void solve()
{
    int n;
    cin >> n;

    int arr[n];
    vector<int> time(n, 1);
    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        v.push_back(make_pair(arr[i], i));
    }

    sort(v.begin(), v.end(), myCompare);

    for (int i = 0; i < v.size(); i++)
    {
        arr[v[i].second] = i;
    }

    for (int i = 0; i < n; i++)
    {
        time[i] += arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << time[i] << " ";
    }

    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}