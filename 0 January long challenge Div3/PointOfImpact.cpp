#include <iostream>
                   
using namespace std;
                   
int main(){
   int t;
   cin>>t;

   while(t--){
       int n,k,x,y;
       cin>>n>>k>>x>>y; 

       int nx=n,ny=n;

       int i=x, j=y;

       int count=0;

       if(x!=y){
        for(int z=0;z<k;z++){   
           while(i<n){
               i++; 
               j++; 
           }
           nx=i;
           ny=j;
           count++;

           if(count==k){
               break;
           }

           while(j<n){
               i--;  
               j++;
           }

           nx=i;
           ny=j;
           count++;

           if(count==k){
               break;
           }

           while(i>0){
               i--;
               j--;
           }
           nx=i;
           ny=j;
           count++;

           if(count==k){
               break;
           }

           while(j>0){
               i++;
               j--;
           }

           nx=i;
           ny=j;
           count++;

           if(count==k){
               break;
           }       
       }
    }   
    
    cout<<nx<<" "<<ny<<endl;

   }
                   
   return 0;
}