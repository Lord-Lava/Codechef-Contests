#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll unsigned long long
const int mod = 1e9 + 7;

void solve(){
    ll a,y,x;
    cin>>a>>y>>x;

        if(a>y){
            cout<<(a*x+1)<<endl;
        }
        else if(a==y){
            cout<<1<<endl;
        }
        else{
            cout<<(a*x+1)-(a-x)<<endl;
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