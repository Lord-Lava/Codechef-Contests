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

void solve(){
  	int n,m;
  	cin>>n>>m;
  	map<pair<int,int>,int> mp;
  	while(n--){
  		string s;
  		cin>>s;
  		int a,b;
  		cin>>a>>b;
  		mp[{a,b}]++;
  	}
  	// for(auto i:mp){
  		// cout<<i.F.F<<" "<<i.F.S<<endl;
  	// }
  	int ctr = 0;
  	while(m--){
  		int a,b;
  		cin>>a>>b;
  		if(mp[{a,b}]==0) ctr++;
  	}
  	cout<<ctr*2<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);

    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}