#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int mod = 1e9 + 7;

int modu(int a)
{
    return (a%mod + mod) % mod;
}

void solve(){
    int n;
    cin>>n;

    vector<int>arr;
    int sum=0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
        sum+=modu(arr[i]);
    }

    int q;
    cin>>q;

    int ctr=0;

    for (int i = 1; i <=q; i++)
    {
        int x;
        cin>>x;
        
        sum=(modu(sum)*modu(2))%mod;

        cout<<(sum)%mod<<endl;
    }
    
}

signed main(){
    boost

        solve();

    return 0;
}