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

void solve(int tests){
    int n,q;
    cin>>n>>q;

    int arr[n];

    f(i,n) cin>>arr[i];

    int eve[n+1];
    int odd[n+1];
    eve[0] = 0;
    odd[0] = 0;
    int ctr=0;

    f(i,n){
        if(arr[i]%2==0){
            ctr++;
        }
        eve[i+1] = ctr;
        odd[i+1] = i+1-ctr;
    }

    f(i,q){
        int l,r;
        cin>>l>>r;

        int o = odd[r] - odd[l-1];
        int e = eve[r] - eve[l-1];
        
        cout<<o*(o-1)*e/2 + e*(e-2)*(e-1)/6<<endl;   
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