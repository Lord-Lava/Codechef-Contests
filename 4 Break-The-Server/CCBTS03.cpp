#include <bits/stdc++.h>

#define ll long long int

using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    int minDiff=INT_MAX;

    for (int i = 0; i < n-k; i++)
    {
        int d=arr[i+k-1]-arr[i];
        minDiff=min(minDiff,d);
    }
    
    cout<<minDiff<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}