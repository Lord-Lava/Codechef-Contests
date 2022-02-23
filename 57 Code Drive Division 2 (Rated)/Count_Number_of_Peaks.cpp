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

int ans;

int extrema(vi &a, int n)
{
    int count = 0;

    for (int i = 1; i < n - 1; i++)
    {
        count += (a[i] > a[i - 1] && a[i] > a[i + 1]);
 
        count += (a[i] < a[i - 1] && a[i] < a[i + 1]);
    }
 
    return count;
}

void fun(int n, vi &v){
    if(n == 0){
        ans+=extrema(v,v.size());
        return;
    }

    v.pb(0);
    fun(n-1,v);
    v.pop_back();
    v.pb(1);
    fun(n-1,v);
    v.pop_back();
    v.pb(2);
    fun(n-1,v);
    v.pop_back();
}

void solve(int tests){
    int n;
    cin>>n;

    vi v;
    ans = 0;
    fun(n,v);
    cout<<ans<<endl;
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