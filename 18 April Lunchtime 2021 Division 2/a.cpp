#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int mod = 1e9 + 7;

void solve(){
    int l;
    cin>>l;

    string s;
    cin>>s;

    int g=0;
    double p;

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='1')g++;

        p=(double)((double)g/(double)(i+1))*100;

        if(p>=50){
            cout<<"YES"<<endl;
            return;
        }
    }

    cout<<"NO"<<endl;
    
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