#include <iostream>
#include<string>
                   
using namespace std;

string decode(string &s){
    
    string temp="abcdefghijklmnop";

    for(int i=0;i<4;i++){
        if(s[i]=='0'){
            temp.erase(temp.length()/2,temp.length()/2);
        }
        else{
            temp.erase(0,temp.length()/2);
        }
    }
    s.erase(0,4);
    return temp;
}
                   
int main(){
   int t;
   cin>>t;

   while(t--){
       int n;
       cin>>n;

       string s;
       cin>>s;

       int count=s.length()/4;
       string ans="";


        for(int i=0;i<count;i++){ 
            ans+=decode(s);
        }

        cout<<ans<<endl;
   }
                   
   return 0;
}