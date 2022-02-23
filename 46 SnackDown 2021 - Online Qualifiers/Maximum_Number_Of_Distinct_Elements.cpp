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

bool comp1(pair<int,int>p1,pair<int,int>p2){
    return p1.F>p2.F;
}

bool comp2(pair<int,int>p1,pair<int,int>p2){
    return p1.S<p2.S;
}

void solve(int tests){
    int n;
    cin>>n;
    
    mi d;
    vii v;

    int ar[n];
    f(i,n){
        cin>>ar[i];
        v.pb(MP(ar[i],i));
        d[ar[i]] = ar[i] - 1;
    } 

    int arr[n];
    f(i,n){
        arr[i] = ar[i];
    }

    sort(arr,arr+n,greater<int>());
    sort(v.begin(),v.end(),comp1);

    v[0].F = v[0].F + d[v[0].F]; 
    d[arr[0]]--;
    if(d[arr[0]] < 0){
        d[arr[0]] = arr[0] - 1;
    }

    rep(i,1,n){
        if(d[v[i].F] > d[arr[i-1]] ){
            d[v[i].F] = d[arr[i-1]];
            if(d[v[i].F] < 0){
                d[v[i].F] = v[i].F - 1;
            }
        }

        v[i].F = v[i].F + d[v[i].F];
        d[arr[i]]--;
        if(d[arr[i]] < 0){
            d[arr[i]] = arr[i] - 1;
        }
    }

    sort(v.begin(),v.end(),comp2);

    f(i,n){
        cout<<v[i].F<<" ";
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