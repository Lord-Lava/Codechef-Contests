#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int mod = 1e9 + 7;

void solve(){
    int n,m;
    cin>>n>>m;
    n--;m--;

    int x,y,a,b;
    cin>>x>>y>>a>>b;
    x--;y--;a--;b--;

    string ans="YES";

        int trd = (m-y);
        int tdd = (n-x); //cout<<x<<"x "<<y<<"y "<<n<<"n "<<m<<"m "<<a<<"a "<<b<<"b "<<endl;

        int mov = trd+tdd;
        int pr = m-b;
        int pd=0;
        if(a+pr<=n){
            pd = n-(a+pr);
        }

        int nmov = pr+pd;

        // cerr<<trd<<"tr "<<tdd<<"td "<<mov<<"mv "<<pr<<"pr "<<pd<<"pd "<<nmov<<"nmv "<<endl;

        if(nmov<mov){
            ans="NO";
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