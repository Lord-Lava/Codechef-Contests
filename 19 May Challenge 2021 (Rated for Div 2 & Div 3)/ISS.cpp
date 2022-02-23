// Problem: An Interesting Sequence
// Contest: CodeChef - May Challenge 2021 Division 2 (Rated)
// URL: https://www.codechef.com/MAY21B/problems/ISS
// Memory Limit: 256 MB
// Time Limit: 1500 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define f(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define F first
#define S second

void solve(){
    int k;
    cin>>k;
    
    int sum=0;
    
    for(int i=1;i<=2*k;i++){
    	int a = k+i*i;
    	int b = k+(i+1)*(i+1);
    	
    	sum+=__gcd(a,b);
    }
    
    cout<<sum<<endl;
}

signed main(){
    boost

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}