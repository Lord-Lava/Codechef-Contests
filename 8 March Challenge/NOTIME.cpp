#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const int mod = 1e9 + 7;

void solve(){
    ll n,h,x;
    cin>>n>>h>>x;

    ll arr[n];

    string ans="NO";

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i]>=h-x){
            ans="YES";
            break;
        }
    }
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

        solve();

    return 0;
}