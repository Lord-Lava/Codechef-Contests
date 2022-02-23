#include <iostream>
using namespace std;

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin>>t;


    while(t--){

        long long n;
        cin>>n;

        if(n<=2){
            cout<<1<<"\n";
            continue;
        }
        
        n-=2;
        cout<<1 + n*(n+1)<<"\n";
    }

    return 0;
}