#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int mod = 1e9 + 7;

void solve(){
    int n,m;
    cin>>n>>m;

    int f[n]; int c[m];
    map<int,int>mp;

    int count =0;

    for (int i = 0; i < n; i++)
    {
        cin>>f[i];
        mp[f[i]]++;
    }

    for (int i = 0; i < m; i++)
    {
        cin>>c[i];
        mp[c[i]]=2;
    }

    bool flag=0;
    for (auto i : mp)
    {
        if(i.second==2 && flag==0){
            count++;
            flag=1;
        }
        else if(i.second==1 && flag==1){
            count++;
            flag=0;
        }
    }
    
    cout<<count<<endl;
    
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