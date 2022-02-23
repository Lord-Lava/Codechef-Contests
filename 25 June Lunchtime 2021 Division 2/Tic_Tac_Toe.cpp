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

    vii v;

    int arr[n][m];
    fill(arr,0);

    f(i,n*m){
        int x,y;
        cin>>x>>y;
        v.pb(MP(x,y));
    }

    f(i,v.size()){
        if(i&1){
            arr[v[i].F-1][v[i].S-1] = 2;
        }
        else{
            arr[v[i].F-1][v[i].S-1] = 1;
        }
    }

    // f(i,n){
    //     f(j,m){
    //         cout<<arr[i][j]<<" ";
    //     }cout<<endl;
    // }
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