#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree <int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

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

    vi v;

    for (int i = 0; i < n; i++)
    {
        int y;
        cin>>y;

        v.pb(y);
    }

    sort(v.begin(),v.end());

    while(q--){
        int x;
        cin>>x;

        if(binary_search(v.begin(),v.end(),x)){
            cout<<0<<endl;
        }
        else{
            int num = lower_bound(v.begin(),v.end(),x)-v.begin();
            // cerr<<num<<"\n";
            if(num&1){
                cout<<"NEGATIVE\n";
            }
            else{
                cout<<"POSITIVE\n";
            }
        }
    }
}

signed main(){
    boost

    int tests = 1;
    // cin >> tests;

    for(int i=1;i<=tests;i++){
        solve(i);
    }

    return 0;
}