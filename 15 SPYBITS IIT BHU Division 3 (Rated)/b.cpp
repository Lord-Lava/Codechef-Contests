#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int mod = 1e9 + 7;

void solve(){
    int n;
    cin>>n;

    int b[n];
    int g[n];

    vector<int>v;

    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin>>g[i];
    }

    sort(b,b+n);
    sort(g,g+n,greater<int>());

    int MaxSum=INT_MIN;

    for (int i = 0; i < n; i++)
    {
        MaxSum=max(MaxSum,b[i]+g[i]);
    }

    cout<<MaxSum<<endl;
}

signed main(){
    boost

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}