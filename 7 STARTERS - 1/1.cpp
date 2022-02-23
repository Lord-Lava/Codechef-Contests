#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const int mod = 1e9 + 7;

void solve(){
    ll d,c;
    cin>>d>>c;

    ll a[3];
    ll b[3];

    ll sa=0;
    ll sb=0;

    string ans="NO";

    for (int i = 0; i < 3; i++)
    {
        cin>>a[i];
        sa+=a[i];
    }

    for (int i = 0; i < 3; i++)
    {
        cin>>b[i];
        sb+=b[i];
    }

    ll sum1=0;
    ll sum2=0;

    if(sa>=150 && sb>=150){
        sum1+=sa+sb+c;
        sum2+=sa+sb+2*d;
    }
    if(sa>=150 && sb<150){
        sum1+=sa+sb+c+d;
        sum2+=sa+sb+2*d;
    }
    if(sa<150 && sb>=150){
        sum1+=sa+sb+c+d;
        sum2+=sa+sb+2*d;
    }

    if(sum1<sum2){
        ans="YES";
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