#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
const int mod = 1e9 + 7;

void solve(){
    int n;
    cin>>n;

    map<ll,vector<ll>>mp;

    ll ans=0;

    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin>>x>>y;

        mp[x].push_back(y);
    }

    for (auto it = mp.begin(); it!=mp.end(); it++)
    {
        ll o=0,z=0;
        for (int i = 0; i < (it->second).size(); i++)
        {
            if((it->second)[i]==0){
                z++;
            }
            else{
                o++;
            }
        }
        if(z>o){
            ans+=-1*it->first*z;
        }
        else{
            ans+=it->first*o;
        }
         
    }
    
    cout<<ans<<endl;
    
    
}

int main(){
    boost
        solve();

    return 0;
}