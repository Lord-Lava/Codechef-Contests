#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int mod = 1e9 + 7;

void solve(){
    int n,x;
    cin>>n>>x;

    int s=n-x;

    int arr[n];

    map<int,int>mp;
    mp.clear();

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }

    int m = mp.size();

    if(m>=s)
        cout<<s<<endl;
    else
        cout<<m<<endl;    
    
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