#include <bits/stdc++.h>
                   
using namespace std;
                   
int main(){
   int t;
   cin>>t;

   while (t--)
   {
      int x,y,z;
      cin>>x>>y>>z;

      string ans="NO";

      if(x==y+z || y==x+z || z==x+y){
         ans="YES";
      }

      cout<<ans<<endl;
   }
   
                   
   return 0;
}