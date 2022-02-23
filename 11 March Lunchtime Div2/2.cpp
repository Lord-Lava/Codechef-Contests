#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int unsigned long long
const int mod = 1e9 + 7;

void solve(){
    int x,r,m;
    cin>>x>>r>>m;

    r*=60;
    m*=60;

    int tot=0;

    if(m<r){
        cout<<"NO"<<endl;
        return;
    }

    if(x>=r){
        cout<<"YES"<<endl;
        return;
    }

        int rem=r%x;
        r-=rem;
        
        tot+=2*r-x;
        tot+=rem*2;

    // while(r!=0){
    //     r-=x;
    //     tot+=x;
    //     if(r>x){
    //         tot+=x;
    //     }
    //     else{
    //         tot+=r;
    //     }
    // }
    // cerr<<tot<<endl;

    if(tot>m){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
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