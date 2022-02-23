#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int mod = 1e9 + 7;

void solve(){
    int r,o,c;
    cin>>r>>o>>c;

    int rem= r-c;

     o = 20-o;

    if(o*36>rem){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

signed main(){
    boost

        solve();

    return 0;
}