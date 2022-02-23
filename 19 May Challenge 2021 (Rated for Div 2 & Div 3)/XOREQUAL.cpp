#include <bits/stdc++.h>
using namespace std;

const int mod = 1000000007;
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define f(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define F first
#define S second

int power(int x, int y)
{
    int res = 1;  
    x = x % mod;
    if (x == 0) return 0; 
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % mod;
        y = y>>1; 
        x = (x*x) % mod;
    }
    return res;
}

void solve(){
    int n;
    cin>>n;
    
    cout<<power(2,n-1)<<endl;
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