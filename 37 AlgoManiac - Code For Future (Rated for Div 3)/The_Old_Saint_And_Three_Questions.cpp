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
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;

    int c0 = 0;
    int c00 = 0;
    int c1 = 0;
    int c11=0;

    if(a==0){
        c0++;
    }
    else{
        c1++;
    }
    if(b==0){
        c0++;
    }
    else{
        c1++;
    }
    if(c==0){
        c0++;
    }
    else{
        c1++;
    }

    if(d==0){
        c00++;
    }
    else{
        c11++;
    }
    if(e==0){
        c00++;
    }
    else{
        c11++;
    }
    if(f==0){
        c00++;
    }
    else{
        c11++;
    }

    if(c00 == c0 && c11 == c1){
        cout<<"Pass\n";
    }
    else{
        cout<<"Fail\n";
    }
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