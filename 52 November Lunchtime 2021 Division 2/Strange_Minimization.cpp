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

int lcm(int a,int b)
{
    return (a*b)/__gcd(a,b);
}

vi Divisors(int n)
{
    vi v;
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            if (n/i == i){
                if(i!=n){
                    v.pb(i);
                }
            }
            else{
                if(i!=n)
                    v.pb(i);
                if(n/i != n)
                    v.pb(n/i);
            }
        }
    }
    return v;
}

void solve(int tests){
    int n;
    cin>>n;

    vi div = Divisors(n);

    int mn = 1e18;

    int ans =0;

    for(auto it:div){
        int x = n+it;
        int l = lcm(x,n);

        int comp = abs(it-l);
        if(comp<mn){
            mn=comp;
            ans=x;
        }
    }

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