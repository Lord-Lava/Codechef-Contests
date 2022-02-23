#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int mod = 1e9 + 7;

void solve(){
    int x,y,xr,yr,D;
    cin>>x>>y>>xr>>yr>>D;

    string ans = "NO";

    int f=x/xr;
    int w=y/yr;

    int s = min(f,w);

    if(s>=D){
        ans="YES";
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