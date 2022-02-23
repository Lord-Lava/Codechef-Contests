#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const int mod = 1e9 + 7;

int getBit(int n, int pos){
    return ((n&(1<<pos))!=0);
}

int setBit(int n, int pos){
    return(n|(1<<pos));
}

int clearBit(int n, int pos){
    int mask=~(1<<pos);
    return (n&mask);
}

void solve(){
    ll c;
    cin>>c;

    ll temp=c;

    ll d=0;

    while(temp>=1){
        temp/=2;
        d++;
    }

    ll a=0; ll b=0;

    for (int i = 0; i < d; i++)
    {
        if(getBit(c,i)==1 && i==d-1){
            a=setBit(a,i);
        }
        else if(getBit(c,i)==1 && i!=d-1){
            a=clearBit(a,i);
        }
        else if(getBit(c,i)==0){
            a=setBit(a,i);
        } 
    }

    for (int i = 0; i < d; i++)
    {
        if(getBit(c,i)==1 && i!=d-1){
            b=setBit(b,i);
        }
        else if(getBit(c,i)==0){
            b=setBit(b,i);
        }
    }
    
    cout<<a*b<<endl;
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