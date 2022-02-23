#include <bits/stdc++.h>
                   
using namespace std;

#define ll long long

ll prime[1000001];

map<ll,ll>arr;

ll ctr=0;

void primeSieve(ll n){
    prime[0]=1;
    prime[1]=1;

    for(ll i=2;i<=n;i++){
        if(prime[i]==0){
            for(ll j=i*i;j<=n;j+=i){
                prime[j]=1;
            }
        }
    }

    for(ll i=2;i<=n;i++){
        if(prime[i]==0){
            if(prime[2+i]==0){
                ctr++;
            }
        }
        arr[i]=ctr;
    }
}
                   
int main(){
   ll t;
   cin>>t;

   primeSieve(1000000);
    
   while(t--){
       ll n;
       cin>>n;
       
       if(n<=3){
           cout<<"0"<<endl;
           continue;
       }
       
       if(prime[n]==0 && prime[n+2]==0){
           arr[n]--;
       }

       if(prime[n-1]==0 && prime[n+1]==0){
           cout<<arr[n]-1<<endl;
           continue;
       }
       
       cout<<arr[n]<<endl;
   }
                   
   return 0;
}