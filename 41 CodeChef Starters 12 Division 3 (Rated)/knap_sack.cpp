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

int t[61][241];

int knapsack(int wt[],int val[],int w,int n){
    if(n==0 || w==0){ //base case
        return 0;
    }

    if(t[n][w]!=-1) return t[n][w];

    if(wt[n-1]<=w){
        return t[n][w] =  max(val[n-1] + knapsack(wt,val,w-wt[n-1],n-1),knapsack(wt,val,w,n-1));
    }
    return t[n][w] = knapsack(wt,val,w,n-1);
}

void solve(int tests){
    int n = 60;

    int w = 240;

    int we[3],vl[3];

    for (int i = 0; i < 3; i++)
    {
        cin>>we[i];
    }

    for (int i = 0; i < 3; i++)
    {
        cin>>vl[i];
    }

    int wt[60],val[60];

    f(i,20){
        wt[i] = we[0];
    }
    rep(i,20,40){
        wt[i] = we[1];
    }
    rep(i,40,60){
        wt[i] = we[2];
    }

    f(i,20){
        val[i] = vl[0];
    }
    rep(i,20,40){
        val[i] = vl[1];
    }
    rep(i,40,60){
        val[i] = vl[2];
    }

    memset(t,-1,sizeof(t));

    cout<<knapsack(wt,val,w,n)<<endl;
    
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