#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int mod = 1e9 + 7;

void solve(){
    int n,k;
    cin>>n>>k;

    if(k<n/2){
        k=n/2-k;
        int ans =0;
        
        if(n%2==0){
            if(k%2==0){
                ans=1;
            }
            else{
                ans=2;
            }
            cout<<k+2<<" "<<ans<<endl;
        }
        else{
            if(k%2==0){
                ans=1;
            }
            else{
                ans=2;
            }
            cout<<k+2<<" "<<4-k<<endl;
        }
    }
    else if(k==n/2){
        if(n%2==0)
            cout<<2<<" "<<k<<endl;
        else
            cout<<3<<" "<<1<<endl;    
    }
    else if(k>n/2 && k<n){
        k=k-n/2;
        if(n%2!=0){
            cout<<2<<" "<<n/2-k+2<<endl;
        }
        else{
            cout<<2<<" "<<n/2-k<<endl;
        }
    }
    else if(k==n){
        cout<<1<<" "<<k<<endl;
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