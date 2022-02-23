#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int mod = 1e9 + 7;

bool isSorted(vector<int>v){
    int c=1;
    int n = v.size();
    for(int i=0;i<n-1;i++){ 
        if(v[i+1]>=v[i]){
            c++;
        }
    }
    if(c==n){
        return true;
    }
    return false;
}

void solve(){
    int n;
    cin>>n;

    vector<int>v;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    if(isSorted(v)){
        cout<<"YES\n0"<<endl;
        return;
    }

    vector<int>v1;
    vector<int>v2;

    int ctr=0;

    for (int i = 0; i < v.size(); i++)
    {
        if(v[i]>=v[i+1]){
            v1.push_back(v[i]);
            ctr++;
        }
        if(v[i]<v[i+1]){
            v2.push_back(v[i]);
            ctr++;
        }
    }

    cerr<<ctr<<endl;

    // if(ctr>2){
    //     cout<<"NO"<<endl;
    //     return;
    // }
    // else{
        vector<int>v3;
        for (int i = 0; i < v2.size(); i++)
        {
            cerr<<v2[i]<<" ";
            v3.push_back(v2[i]);
        }cerr<<endl;
        for (int i = 0; i < v1.size(); i++)
        {
            cerr<<v1[i]<<" ";
            v3.push_back(v1[i]);
        }cerr<<endl;
    //     if(isSorted(v3)){
    //         cout<<"YES\n1"<<endl;
    //     }
    // }
    
    
    
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