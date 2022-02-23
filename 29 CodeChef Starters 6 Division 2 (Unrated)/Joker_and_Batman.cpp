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

int row(vvi v,int x){
    int r = v.size();
    int c = v[0].size();

    f(i,r){
        f(j,c){
            if(v[i][j]==x){
                return i;
            }
        }
    }
    return -1;
}

void solve(int tests){
    int n,m,l;
    cin>>n>>m>>l;

    mi mp;

    f(i,m){
        int k;
        cin>>k;

        vi v;
        f(j,k){
            int x;
            cin>>x;

            mp[x] = i;
        } 
    }

    int b[l];
    f(i,l) cin>>b[i];

    int ctr=1;

    f(i,l-1){
        if(mp[b[i]]!=mp[b[i+1]]) ctr++;
    }

    cout<<ctr<<endl;
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