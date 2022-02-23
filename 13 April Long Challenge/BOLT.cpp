#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int mod = 1e9 + 7;

float roundOff(float f){
    float ans = (int)(f*100+0.5);
    return (float)ans/100;
}

void solve(){
    float k1,k2,k3,v;
    cin>>k1>>k2>>k3>>v;

    float t = 100/(k1*k2*k3*v);

    float s = roundOff(9.58);

    if(roundOff(t)<s){
        cout<<"Yes"<<endl;
    }
    else {
        cout<<"No"<<endl;
    }
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