#include <iostream>
                   
using namespace std;
                   
int main(){
   int t;
   cin>>t;

   while(t--){
       int n,k,d;
       cin>>n>>k>>d;

       int arr[n];

       for (int i = 0; i < n; i++)
       {
           cin>>arr[i];
       }

       int sum=0;
       int ans=0;

       for (int i = 0; i < n; i++)
       {
           sum+=arr[i];
       }

       int Vans=sum/k;

       if(Vans==0){
           ans = 0;
       }
       else{
           if(Vans<=d){
               ans=Vans;
           }
           else{
               ans=d;
           }
       }

       cout<<ans<<endl; 
       
   }
                   
   return 0;
}