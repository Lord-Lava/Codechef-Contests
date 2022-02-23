#include <iostream>
#include<algorithm>

#define ll long long
                   
using namespace std;
                   
int main(){
   int t;
   cin>>t;

   while(t--){
       int n,m;
       cin>>n>>m;

       int A[n], B[m];
       ll sumA=0, sumB=0;
       int ans=-1;

       for(int i=0;i<n;i++){
           cin>>A[i];
           sumA+=A[i];
       }
       
       for(int i=0;i<m;i++){
           cin>>B[i];
           sumB+=B[i];
       }

       ll d=sumB-sumA; 

       sort(A,A+n);
       sort(B,B+m,greater<int>());

       if(d<0){
           ans=0;
       }
       else{
           ll currDiff=0;
           if(m>n){
                for(int i=0;i<n;i++){
                    currDiff+=2*(B[i]-A[i]);
                    if(currDiff>d){
                        ans=i+1;
                        break;
                    }
                }
           }
            else{
                for(int i=0;i<m;i++){
                    currDiff+=2*(B[i]-A[i]);
                    if(currDiff>d){
                        ans=i+1;
                        break;
                    }
                }
           }
       } 

    cout<<ans<<endl;    

   }
                   
   return 0;
}