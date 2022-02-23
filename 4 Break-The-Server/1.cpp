#include <bits/stdc++.h>

#define ll long long int

using namespace std;

void solve(){
    string ans="YES";
    string s;
    cin>>s;

    for (int i = 0; i < s.size(); i++)
    {
        if(s[0]==s[1] || s[0]==s[2] || s[1]==s[2]){
            ans="NO";
        }
    }
    cout<<ans<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}