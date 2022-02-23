#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const int mod = 1e9 + 7;

void solve(){
    ll n,k;
    cin>>n>>k;

    ll arr[k];
    string sarr[n];

    ll ans[n]={0};
    ll score=0;

    for (ll i = 0; i < k; i++)
    {
        cin>>arr[i];
    }

    cin.ignore();

    for (ll i = 0; i < n; i++)
    {
        getline(cin,sarr[i]);
    }
    
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < k; j++)
        {
            if(sarr[i][j]=='1'){
                score+=arr[j];
                ans[i]=score;
            }
        }
        score=0;
    }
    
    for (ll i = 0; i < n; i++)
    {
        cout<<ans[i]<<endl;
    }
    
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}