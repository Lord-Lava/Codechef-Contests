#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int mod = 1e9 + 7;

void solve(){
    int n;
    cin>>n;

    if(n==1){
        cout<<20<<endl;
    }
    else if(n==2){
        cout<<36<<endl;
    }
    else if(n==3){
        cout<<51<<endl;
    }
    else if(n==4){
        cout<<60<<endl;
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