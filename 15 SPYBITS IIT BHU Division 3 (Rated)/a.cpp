#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int mod = 1e9 + 7;

void solve(){
    int h,x,y,c;
    cin>>h>>x>>y>>c;

    string ans = "NO";

    if(h*(floor(y/2)+x)<=c){
        ans = "yes";
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