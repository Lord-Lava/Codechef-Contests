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
    int x,y,n,m;
    cin>>n>>m>>x>>y;

    int c1 = (n-1)*x + (m-1)*x;

    int c2 = 0;

    int c4 = INT_MAX;

    if(n>m){
        c2 = (m-1)*y + (n-m)*x; 
    }
    else{
        c2 = (n-1)*y + (m-n)*x; 
    }

    int c3 = INT_MAX;

    if(n>m){
        
    }
    else{

    }

    if((n%2==0 && m%2==0) || (n&1 && m&1)){
        if(n>m){
            c3 = (m-1)*y + (n-m)*y; 
        }
        else{
            c3 = (n-1)*y + (m-n)*y; 
        }
    }

    // cout<<c1<<" "<<c2<<" "<<c3<<endl;

    cout<<min({c1,c2,c3})<<endl;

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