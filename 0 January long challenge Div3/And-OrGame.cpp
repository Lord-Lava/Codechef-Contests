#include <iostream>
#include<vector>
                   
using namespace std;
                   
int main(){
   int t;
   cin>>t;

   int n,m;
   cin>>n>>m;

   int A[n],B[m],v=0;
   vector<int>arr;
   
   for (int i = 0; i < n; i++)
   {
       int x;
       cin>>A[i];
       x=A[i]|v;
       arr.push_back(x);
   }
   

   for (int i = 0; i < m; i++)
   {
       int x;
       cin>>B[i];
       x=B[i]&v;
       arr.push_back(x);
   }

   for (int i = 0; i < n; i++)
   {
       for (int j = 0; j < m; j++)
       {
           int x;
           x=(v|A[i])&B[j];
           arr.push_back(x);
       }
   }
   
   for (int i = 0; i < m; i++)
   {
       for (int j = 0; j < n; j++)
       {
            int x;
            x=(v&B[i])&A[j];
            arr.push_back(x);
       }
   }

   for (int i = 0; i < n; i++)
   {
       for (int j = 0; j < m; j++)
       {
            v=(v|A[i])&B[j];
            arr.push_back(v);
       }
   }
   
   for (int i = 0; i < m; i++)
   {
       for (int j = 0; j < n; j++)
       {
            v=(v&B[i])&A[j];
            arr.push_back(v);
       }
   }
   
   for (int i = 0; i < arr.size(); i++)
   {
       cout<<arr[i]<<" ";
   } 
                   
   return 0;
}