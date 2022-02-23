#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int mod = 1e9 + 7;

void solve(){
    int n,m;
    cin>>n>>m;

    int x,y;
    cin>>x>>y;

    vector<pair<int,int>>v;

    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        int f=0;
        int p=0;
        for(int j=0;j<s.size();j++){
            if(s[j]=='F'){
                f++;
            }
            else if(s[j]=='P'){
                p++;
            }
        }
        v.push_back(make_pair(f,p));
    }

    vector<int>ans;
    ans.clear();

    for (int i = 0; i < v.size(); i++)
    {
        if(v[i].first>=x || (v[i].first>=x-1 && v[i].second>=y)){
            ans.push_back(1);
        }
        else{
            ans.push_back(0);
        }
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }cout<<endl;

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