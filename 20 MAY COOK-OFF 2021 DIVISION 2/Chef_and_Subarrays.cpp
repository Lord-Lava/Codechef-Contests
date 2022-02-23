#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int mod = 1e9 + 7;

void solve(){
    int n,k;
    cin>>n>>k;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    // if(k==n){
    //     cout<<0<<endl;
    //     return;
    // }

    int pref[n+1];
    pref[0] = 0;

    for (int i = 1; i < n+1; i++)
    {
        pref[i] = pref[i-1] + arr[i-1];
    }

    vector<int>sum;

    for (int i = 1; i+k-1<n+1; i++)
    {
        sum.push_back(pref[i+k-1]-pref[i-1]);
    }

    // for (int i = 0; i < sum.size(); i++)
    // {
    //     cout<<sum[i]<<" ";
    // }cout<<endl;

    map<int,int>mp;

    for (int i = 0; i < sum.size(); i++)
    {
        mp[sum[i]]++;
    }

    int max_freq = INT_MIN;

    int ele;

    for(auto x : mp){
        // cout<<x.first<<" "<<x.second<<"\n";
        if(x.second>max_freq){
            max_freq = x.second;
            ele = x.first;
        }
    }

    int ctr=0;
    for (auto x:mp)
    {
        if(x.first!=ele){
            ctr+=x.second;
        }
    }

    if(ctr==0){
        cout<<0<<endl;
        return;
    }
    

    cout<<ctr<<endl;
    
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