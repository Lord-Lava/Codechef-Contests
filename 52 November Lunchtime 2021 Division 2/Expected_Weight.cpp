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

int fact(int i){
	if (i <= 1) return 1;
  	else return i*fact(i-1);
}

int calculate(int p,int q)
{
    int mod = 998244353, expo;
    expo = mod - 2;
    while (expo) {
        if (expo & 1) {
            p = (p * q) % mod;
        }
        q = (q * q) % mod;
 
        expo >>= 1;
    }
    return p;
}

void solve(int tests){
    int n;
    cin>>n;

    int arr[n];

    f(i,n){
        arr[i] = i+1;
    }

    int p=0;
    do{
        int sum =0;
        f(i,n){
            sum+=(i+1)*arr[i];
        }
        p+=sum;
    }while(next_permutation(arr,arr+n));

    

    int q = fact(n);

    // cerr<<p<<" "<<q<<endl;

    int g = __gcd(p,q);

    p/=g;
    q/=g;

    cerr<<p<<" "<<q<<endl;

    cout<<calculate(p,q)<<endl;
    
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