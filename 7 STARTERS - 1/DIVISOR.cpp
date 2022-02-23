#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const int mod = 1e9 + 7;

void solve(){
    ll n;
    cin>>n;

    vector<ll>arr;

    if(n<6){
        if(n==1){
            cout<<"1"<<endl;
        }
        else if(n==4){
            cout<<"3"<<endl;
        }
        else{
            cout<<"2"<<endl;
        }
        return;
    }

    for (int i = 6; i < n; i++)
    {
        if(n%i==0){
            arr.push_back(i);
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        
    }
    
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}