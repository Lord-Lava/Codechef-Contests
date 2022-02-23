#include <bits/stdc++.h>

#define ll long long int

using namespace std;

void solve(){
    int n;
    cin>>n;

    int count=0;
    int maxC=INT_MIN;

    int h[n];
    int iq[n];

    for (int i = 0; i < n; i++)
    {
        cin>>h[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin>>iq[i];
    }
    
    for (int i = 0; i < n-1; i++)
    {
        if((h[i]<h[i+1]) && (iq[i]>iq[i+1])){
            count++;
            maxC=max(maxC,count);
        }
        else{
            count=0;
        }
    }
    
    cout<<maxC+1<<endl;
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