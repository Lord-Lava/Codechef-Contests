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
    int r1,w1,c1,r2,w2,c2;
    cin>>r1>>w1>>c1>>r2>>w2>>c2;

    int a=0,b=0;
    if(r1>r2){
        a++;
    }
    else{
        b++;
    }
    if(c1>c2){
        a++;
    }
    else{
        b++;
    }
    if(w1>w2){
        a++;
    }
    else{
        b++;
    }

    if(a>b) cout<<"A\n";
    else cout<<"B\n";
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