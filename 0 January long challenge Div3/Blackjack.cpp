#include <iostream>
#include<vector>
                   
using namespace std;
                   
int main(){
   int t;
   cin>>t;

   while(t--){
       int n,x,y;
       cin>>n>>x>>y;

       vector<int>arr;
       int sum=0;
       int ans=-1;

       for (int i = 0; i < n; i++){
           int x;
           cin>>x;
           arr.push_back(x);
           sum+=arr[i];
           if(sum>=x && sum<=y){
               ans=0;
           } 
       }

       if(ans==0){
           
       }



        cout<<ans<<endl;
       
   }
                   
   return 0;
}