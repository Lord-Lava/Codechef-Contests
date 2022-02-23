#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int mod = 1e9 + 7;

void solve(){
    int n;

    int w[n]; 
    map<int,int>mp;

    int sum=0;

    for (int j = 1; j <= n; j++)
    {
        cin>>w[j];
        sum+=w[j];
        mp[j]=w[j];
    }
    
    int count = 0;
    int i=n,j=0;

    for (auto it = mp.rbegin(); it != mp.rend(); it++)
    {
        if(j>i){
            
        }
        j=it->second;
        i--;
    }


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