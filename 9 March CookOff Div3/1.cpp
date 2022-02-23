#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
const int mod = 1e9 + 7;

void solve(){
    int w1,w2,x1,x2,M;
    cin>>w1>>w2>>x1>>x2>>M;

    int ans=0;

    int diff = w2-w1;

    if(diff>=x1*M && diff<=x2*M){
        ans=1;
    }

    cout<<ans<<endl;
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