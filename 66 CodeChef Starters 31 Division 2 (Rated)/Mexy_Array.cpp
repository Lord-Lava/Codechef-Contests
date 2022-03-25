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
#define all(v) v.begin(),v.end()
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

void solve(int tests){
    int n;
    cin>>n;

    int b[n];
    f(i,n)cin>>b[i];

    vi v;
    f(i,n){
        if(b[i]>=0)v.pb(b[i]);
    }

    f(i,(int)v.size()-1){
        if(v[i+1]<v[i]){
            cout<<-1<<endl;
            return;
        }
    }

    f(i,n){
        if(b[i]>=0 && b[i]>i+1){
            cout<<-1<<endl;
            return;
        }
    }

    int a[n];

    f(i,n){
        a[i] = i;
    }

    f(i,n){
        if(a[i]+1 > b[i]){
            a[i]++;
        }
    }

    f(i,n)cout<<a[i]<<" ";cout<<endl;


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