#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const int mod = 1e9 + 7;

void solve(){
    ll n;
    cin>>n;

    vector<ll>arr;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }

    sort(arr.begin(),arr.end(),greater<int>());

    if(n==2){
        cout<<arr[0]*arr[1]+abs(arr[0]-arr[1])<<endl;
    }
    else if(n>2){
        if(arr[0]*arr[1]>arr[n-1]*arr[n-2]){
            cout<<arr[0]*arr[1]+abs(arr[0]-arr[1])<<endl;
        }
        else if(arr[0]*arr[1]==arr[n-1]*arr[n-2]){
            if(abs(arr[0]-arr[1])>=abs(arr[n-1]-arr[n-2])){
                cout<<arr[0]*arr[1]+abs(arr[0]-arr[1])<<endl;
            }
            else{
                cout<<arr[n-1]*arr[n-2]+abs(arr[n-2]-arr[n-1])<<endl;
            }
        }
        else{
            cout<<arr[n-1]*arr[n-2]+abs(arr[n-2]-arr[n-1])<<endl;
        }
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