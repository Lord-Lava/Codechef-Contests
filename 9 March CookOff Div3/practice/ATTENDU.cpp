#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
const int mod = 1e9 + 7;

void solve(){
    int n;
    cin>>n;

    int rem=120-n;

    string ans="NO";

    string b;
    cin>>b;

    int ctr=0;

    for(int i=0;i<b.size();i++){
        if(b[i]=='1'){
            ctr++;
        }
    }

    if((float)(ctr+rem)/120*100>=(float)75){
        ans="YES";
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