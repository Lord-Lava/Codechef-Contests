#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const int mod = 1e9 + 7;

void solve(){
    string s;
    cin>>s;

    ll counter;

    if(s[s.size()-1]=='1'){
        counter=1;
    }
    else{
        counter=0;
    }

    for (int i = 1; i < s.size(); i++)
    {
        if(s[i]=='0' && s[i-1]=='1'){
            counter++;
        }
    }
    cout<<counter<<endl;
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