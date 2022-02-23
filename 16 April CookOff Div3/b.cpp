#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int mod = 1e9 + 7;

void solve(){
    int n,r;
    cin>>n>>r;

    int arr[n];

    vector<int>v;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n-1; i++)
    {
        v.push_back(arr[i+1]-arr[i]);
    }
    v.push_back(0);
    
    int b[n];

    int sum=0;
    int maxS = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
        sum+=b[i];
        if(sum>r*v[i]){
            sum-=r*v[i];
            maxS = max(maxS,sum);
        }
        else{
            maxS = max(maxS,sum);
            sum=0;
        }
    }

    cout<<maxS<<endl;
    
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