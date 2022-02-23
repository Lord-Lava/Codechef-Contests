#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        ll x,y;
        cin>>x>>y;

        if(y>=x){
            cout<<"Chef"<<endl;
        }
        else{
            cout<<"Divyam"<<endl;
        }
    }

    return 0;
}