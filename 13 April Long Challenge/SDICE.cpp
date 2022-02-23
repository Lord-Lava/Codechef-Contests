#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int mod = 1e9 + 7;

void solve(){
    int n;
    cin>>n;

    int diff;
    int sum = 21*n;

    int q = ceil((double)n/4)-2;
    cerr<<q<<endl;
    int r = n%4;
    int ans;

    if(r==0){
        diff = 24; 
    }
    else if(r==1){
        diff = 1;   
    }
    else if(r==2){
        diff = 6;   
    }
    else{
        diff = 12;  
    }

    if(n<=4)
        ans =sum - diff;
    else{
        if(r==0){
            ans = 44*(q)+104;
        }
        else if(r==1){
            ans = 44*(q)+76;
        }
        else if(r==2){
            ans = 44*(q)+88;
        }
        else{
            ans = 44*(q)+99;
        }
    }
    
    cout<<ans<<endl;
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