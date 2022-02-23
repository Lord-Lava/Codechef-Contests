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

    int a[n],b[n-1];
    f(i,n){
        cin>>a[i];
    }
    f(i,n-1){
        cin>>b[i];
    }

    sort(a,a+n);
    sort(b,b+(n-1));

    int d1 = b[0] - a[0];
    int d2 = b[0] - a[1];
    if(d1<=0){
        cout<<d2<<endl;
        return;
    }
    if(d2<=0){
        cout<<d1<<endl;
        return;
    }

    int i=1,j=0;
    while(i<n && j<n-1){
        if((a[i]+d2)!=b[j]){
            cout<<d1<<endl;
            return;
        }
        i++;
        j++;
    }

    i=0;
    j=0;
    int ctr=0;
    while(i<n && j<n-1){
        if((a[i]+d1)!=b[j]){
            i++;
            ctr++;
        }
        else{
            i++;
            j++;
        }
        if(ctr==2){
            cout<<d2<<endl;
            return;
        }
    }

    cout<<min(d1,d2)<<endl;
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