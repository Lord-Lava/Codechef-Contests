#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
const int mod = 1e9 + 7;

void solve(){
    ll m,n;
    cin>>n>>m;

    vector<ll>v;

    ll ans=0;

    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin>>x;

        v.push_back(x);
    }

    if(v.size()==1){
        if(m>v[0]){
            cout<<1<<endl;
            return;
        }
        else if(m==v[0]){
            cout<<2<<endl;
        }
        else{
            cout<<v[0]/m+1<<endl;
            return;
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        cerr<<v[i]<<" ";
        if(v[i]>=m){
            if(i+1>v.size()-1){
                ans+=n+(v[i]-m)/m+1;
                cout<<ans<<endl;
                return;
            }
            v[i+1]+=v[i]-m;
        }
        else{
            cout<<i+1<<endl;
            return;
        }
    }
    
    
}

int main(){
    boost

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}