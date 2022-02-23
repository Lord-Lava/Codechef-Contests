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

    int arr[n];

    f(i,n) cin>>arr[i];

    vi o,e;

    int od =0, ev= 0;

    f(i,n){
        if(arr[i]&1){
            od++;
            o.pb(arr[i]);
        }
        else{
            ev++;
            e.pb(arr[i]);
        }
    }

    vi ans;
    int i = 0,j = 0;

    while(i<e.size()){
        ans.pb(e[i]);
        i++;
    }

    while(j<o.size()){
        ans.pb(o[j]);
        j++;
    }

    int sum = 0;
    rep(i,1,n){
        sum+=abs(ans[i] - ans[i-1]);
    }

    if(!(sum&1)){
        cout<<-1<<endl;
        return;
    }

    f(i,n){
        cout<<ans[i]<<" ";
    }cout<<endl;
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