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

const int n = 1e7;

int prime[n + 1];

void SieveOfEratosthenes(int n)
{
    
    memset(prime, 1, sizeof(prime));

    int ctr = 0;
 
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == 1)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = 0;
        }
    }

    for(int i=0;i<n+1;i++){
        if(prime[i] == 1){
            prime[i] = ctr;
            ctr++;
        }
    }       
}

void solve(int tests){
    int x;
    cin>>x;

    if(x==2){
        cout<<1<<endl;
        return;
    }
    
    if(x==3 || x==4){
        cout<<2<<endl;
        return;
    }

    if(x==5){
        cout<<3<<endl;
        return;
    }

    cout<<prime[x] - prime[x/2] + 1<<endl;
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