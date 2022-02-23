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

bool myCompare(pair<int,int> a , pair<int,int> b){
    return a.F<b.F; 
}
 
vii merge(vii &A) {
    vii ans;
    
    sort(A.begin(),A.end(),myCompare);
  
    vii res;
    for(int i = 0; i < A.size()-1; i++){
        if(A[i].S >= A[i+1].F){
            A[i+1].F = A[i].F;
            A[i+1].S = max(A[i+1].S, A[i].S);
        }
        else res.push_back(A[i]);
    }
    res.push_back(A[A.size()-1]);
    
    return res;
}

void solve(int tests){
    int n,k,f;
    cin>>n>>k>>f;

    vii v;

    f(i,n){
        int s,e;
        cin>>s>>e;

        v.pb(MP(s,e));
    }

    vii res = merge(v);

    int sum=0;

    int sz = res.size();

    f(i,sz){
        sum+=(res[i].S - res[i].F);
    }

    // cerr<<sum<<endl;

    if(f-sum>=k){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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