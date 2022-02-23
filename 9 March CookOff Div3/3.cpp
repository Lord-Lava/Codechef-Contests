#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
const int mod = 1e9 + 7;

void solve(){
    for (int i = 0; i < 1001; i++)
    {
        cout<<(i+1)*(i+1)<<"\n"<<flush;
        int x;
        cin>>x;
        if(x==1){
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