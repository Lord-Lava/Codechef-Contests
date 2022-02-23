#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const int mod = 1e9 + 7;

void solve(){
    ll n,k;
    cin>>n>>k;

    if(k==0){
        cout<<n<<endl;
        return;
    }

    ll rem=n%k;

    cout<<rem<<endl;
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