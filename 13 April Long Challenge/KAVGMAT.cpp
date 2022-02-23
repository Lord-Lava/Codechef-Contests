#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int mod = 1e9 + 7;

void solve(){
    int n,m,k;
    cin>>n>>m>>k;

    int arr[n][m];
    map<pair<int,int>,int>mp;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]>=k){
                mp[make_pair(i,j)]=arr[i][j];  
            }
        } 
    }

    int ans=mp.size();

    for (auto i :mp)
    {
        cerr<<i.first.first<<" "<<i.first.second<<" "<<i.second<<" "<<endl;
    }cerr<<endl;//

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (auto k : mp)
            {
                arr[k.first.first][k.first.second]+arr[k.first.first+][k.first.second]
            }
        }
        
    }
    

    cout<<ans<<endl;
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