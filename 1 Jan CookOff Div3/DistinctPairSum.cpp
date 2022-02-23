#include <iostream>
                   
using namespace std;
                   
int main(){
   int t;
   cin>>t;

   while(t--){
       int l,r;
       cin>>l>>r;
       int ans=2*r-2*l+1;

       cout<<ans<<endl; 
   }
                   
   return 0;
}