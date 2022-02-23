#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const int mod = 1e9 + 7;

void solve(){
    int m,h;
    cin>>m>>h;

    int ans;

    int w=m/(h*h);

    if(w<=18){
        ans=1;
    }
    else if(w>=19 && w<=24){
        ans=2;
    }
    else if(w>=25 && w<=29){
        ans=3;
    }
    else{
        ans=4;
    }
    cout<<ans<<endl;
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