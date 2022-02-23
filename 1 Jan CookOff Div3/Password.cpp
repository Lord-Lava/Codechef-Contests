#include <iostream>
                   
using namespace std;
                   
int main(){
   int t;
   cin>>t;

   while(t--){
      string s;
      cin>>s;

      int count=0;

      string ans="NO";

      if(s.size()>=10){
         for (int i = 0; i < s.size(); i++)
         {
            if(s[i]>='a' && s[i]<='z'){
               count++;
               break;
            }
         }

         for (int i = 1; i < s.size()-1; i++)
         {
            if(s[i]>='A' && s[i]<='Z'){
               count++;
               break;
            }
         }   

         for (int i = 1; i < s.size()-1; i++){
            if(s[i]>='0' && s[i]<='9'){
               count++;
               break;
            }
         }   

         for (int i = 1; i < s.size()-1; i++){
            if(s[i]=='@'||s[i]=='#'||s[i]=='%'||s[i]=='&'||s[i]=='?'){
               count++;
               break;
            }
         }

         if(count==4){
            ans="YES";
         }   
         
      }

      cout<<ans<<endl;
   }
                   
   return 0;
}