#include <bits/stdc++.h>
using namespace std;
#define int             long long
#define vll             vector<int>
#define mll             map<int,int>
#define pll             pair<int,int>
#define vpll            vector<pair<int,int>>
#define pb              push_back
#define mp              make_pair
#define F               first
#define S               second
#define to_low(s)       transform(s.begin(), s.end(), s.begin(), ::tolower);//convert string to lowercase
#define to_up(s)        transform(s.begin(), s.end(), s.begin(), ::toupper);//convert string to uppercase
#define popcount        __builtin_popcount     //used to count number of set bits in a integer
#define llpopcount      __builtin_popcountll
#define f(i,n)          for(int i=0;i<n;i++)
#define fin(i,c,n)      for(int i=c;i<n;i++)
#define fer(i,c,n)      for(int i=c;i>=n;i--)
#define fill(a, x)      memset(a, x, sizeof(a))
#define all(v)          v.begin(),v.end()
#define mod             1000000007
#define no              cout<<"NO\n"
#define yes             cout<<"YES\n"
#define ln              cout<<"\n";

int poww(int x,int y){
    int res = 1; 
    x = x % mod;
    
    if (x == 0) 
    	return 0;
    
    while (y > 0){
        if (y & 1)
            res = (res*x) % mod;
        y = y>>1; 
        x = (x*x) % mod;
    }
    return res;
}
void solve(){
    int n;
    cin>>n;
    int n1 = n;
    string s = to_string(n);
    int size = s.size();
    int sum = 0;
    while(n){
    	int d = n%10;
    	sum+=poww(d,size);
    	n/=10;
    }
    if(n1==sum){
    	cout<<"yes\n";
    }else cout<<"no\n";
}


signed main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);

    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}