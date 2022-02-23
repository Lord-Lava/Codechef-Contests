#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int mod = 1e9 + 7;

#define f(i,n) for(int i=0;i<n;i++)
#define rep(i,s,n) for(int i=s;i<n;i++)
#define fm(it,mp) for(auto it=mp.begin();it!=mp.end();it++)
#define pb push_back
#define fill(a, x) memset(a, x, sizeof(a))
#define MP make_pair
#define F first
#define S second
#define vi vector<int>
#define vii vector<pair<int,int>>
#define vvi vector<vector<int>>
#define mi map<int,int>

void solve(int tests){
    int n,m,k;
    cin>>n>>m>>k;

    vector<int>ans;

    int arr[k];

    f(i,k){
        cin>>arr[i];
    }

    if(k==1){
        cout<<0<<endl;
        return;
    }

    mi mp;

    for(int i=0;i<k;i++){
        mp[arr[i]]++;
    }

    int ctr=0;

    for(auto x:mp){
        if(x.S>1 && x.F<=n){
            ctr++;
            ans.pb(x.F);
        }
    }

    sort(ans.begin(),ans.end());

    cout<<ctr<<" ";
    f(i,ans.size()) cout<<ans[i]<<" ";cout<<"\n";

}

signed main(){
    boost

    int tests = 1;
    cin >> tests;

    for(int i=1;i<=tests;i++){
        solve(i);
    }

    return 0;
}