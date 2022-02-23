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

bool cmp(pair<int,int>p1,pair<int,int>p2){
    return p1.S>p2.S;
}

void solve(int tests){
    int n,k;
    cin>>n>>k;
    vii v;
    int arr[n];
    f(i,n){
        cin>>arr[i];
        v.pb(MP(i,arr[i]));
    }

    vii ans;

    int x=k/2;

    sort(v.begin(),v.end(),cmp);
    
    f(i,k){
        ans.pb(MP(v[i].F,v[i].S));
    }

    cout<<ans[x].S<<endl;

    sort(ans.begin(),ans.end());

    f(i,ans.size()){
        cout<<ans[i].S<<" ";
    }cout<<"\n";
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