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
    int n;
    cin>>n;

    int a[n/2];
    int b[n/2];

    int ak = 0,bk=0;
    int ctr = 0;

    int k = 0;

    f(i,n/2){
        if(i&1){
            a[i] = n-i+1;
            b[i] = n-i;
        }
        else{
            a[i] = i+1;
            b[i] = i+2;
        }
    }

    int s1=0,s2=0;

    f(i,n/2){
        s1+=a[i];
        s2+=b[i];
    }

    sort(a,a+n/2);
    sort(b,b+n/2);

    if(s1==s2){
        cout<<"YES\n";
        f(i,n/2)
            cout<<a[i]<<" ";cout<<endl;
        f(i,n/2)
            cout<<b[i]<<" ";
    }
    else{
        cout<<"NO\n";
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