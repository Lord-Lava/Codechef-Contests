#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
const int mod = 1e9 + 7;

void solve(){
    string s;
    cin>>s;

    for (int i = 0; i < s.size()-4; i++)
    {
        if(s[i]=='p' && s[i+1]=='a' && s[i+2]=='r' && s[i+3]=='t' && s[i+4]=='y'){
            s[i+2]='w';
            s[i+3]='r';
            s[i+4]='i';
        }
    }

    cout<<s<<endl;
    
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