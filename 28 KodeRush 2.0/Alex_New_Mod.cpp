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
    int n;
    cin>>n;

    mi mp;

    int arr[n];
    f(i,n){
        cin>>arr[i];
        mp[arr[i]]++;
    } 
    
    vi v1,v2;

    f(i,n){
        if(mp[arr[i]] == 1 || mp[arr[i]] == 3){
            v1.pb(arr[i]);
        }
        if(mp[arr[i]] == 2){
            v2.pb(arr[i]);
        }
    }

    vi ans;

    ans = v1;

    f(i,v2.size()){
        ans.pb(v2[i]);
    }

    f(i,ans.size()){
        cout<<ans[i]<<" ";
    }cout<<endl;
}

signed main(){
    boost

    int tests = 1;
    // cin >> tests;

    for(int i=1;i<=tests;i++){
        solve(i);
    }

    return 0;
}