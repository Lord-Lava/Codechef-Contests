#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const int mod = 1e9 + 7;

void solve(){
    ll n;
    cin>>n;
    ll arr[n];

    ll sum=0;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    for (int i = 0; i < n; i++)
    {
        if(arr[i]>i+1){
            cout<<"Second";
            return;
        }
    }

    for (int i = 0; i < n; i++)
    {
        sum+=(i+1)-arr[i];
    }

    cout<<sum<<endl;
    

    if(sum%2==0){
        cout<<"Second"<<endl;
    }
    else{
        cout<<"First"<<endl;
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