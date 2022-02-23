#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

const int mod = 1e9 + 7;

void solve(){
    int n,k;
    cin>>n>>k;

    string s;
    cin.ignore();
    getline(cin,s);

    int count = 0;
    int ans = INT_MIN;

    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='*'){
            count++;
            ans = max(ans,count);
        }
        else{
            count=0;
        }
    }

    if(ans==INT_MIN){
        ans=0;
    }

    if(ans>=k){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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