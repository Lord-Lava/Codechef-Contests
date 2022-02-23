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
#define all(v) v.begin(),v.end()
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

void solve(int tests){
    int n;
    cin>>n;

    vi b;
    set<int>st;

    f(i,2*n){
        int c;
        cin>>c;
        b.pb(c);
        st.insert(c);
    }

    vi a;
    for(auto it:st){
        a.pb(it);
    }

    vi ans;

    vi temp;
    f(i,a.size()){
        temp.pb(a[i]);
        int idx = ceil((int)temp.size()/2.0)-1;
        ans.pb(temp[idx]);
    }

    temp = a;
    f(i,a.size()){
        int idx = ceil((int)temp.size()/2.0)-1;
        ans.pb(temp[idx]);
        temp.erase(temp.begin());
    }

    sort(all(b));
    sort(all(ans));

    if(ans==b){
        f(i,a.size()){
            cout<<a[i]<<" "; 
        }cout<<"\n";
    }else{
        cout<<-1<<endl;
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