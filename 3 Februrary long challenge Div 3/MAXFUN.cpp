#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin>>n;

        ll arr[n];

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        sort(arr,arr+n,greater<int>());

        cout<<abs(arr[n-1]-arr[0])+abs(arr[n-1]-arr[1])+abs(arr[1]-arr[0])<<endl;
        
    }

    return 0;
}