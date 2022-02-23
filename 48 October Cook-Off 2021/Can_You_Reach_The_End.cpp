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
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

bool comp(pair<int,int>p1,pair<int,int>p2){
    return p1.S>p2.S;
}

void solve(int tests){
    int n;
    cin>>n;

    bool f = 0;

    int ctr=0;

    mi mp;
    mi m;

    f(i,n){
        int x,y;
        cin>>x>>y;
        
        mp[x] = y;
        m[y] = x;
    }

    int a = n/2;
    int b = n/2 + 1;

    while(a){
        if()
    }

    no
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