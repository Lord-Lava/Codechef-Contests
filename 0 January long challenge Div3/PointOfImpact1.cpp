#include <iostream>
                   
using namespace std;
                   
int main(){
   int t;
   cin>>t;

   while(t--){
       int n,k,x,y;
       cin>>n>>k>>x>>y; 

       int x1,x2,x3,x4,y1,y2,y3,y4;

       int ansx=n,ansy=n;

        if(x>y){
            x1=n;
            y1=y+(n-x);
            x2=x1-(n-y1);
            y2=n;
            x3=0;
            y3=y2-x2;
            x4=x3+y3;
            y4=0;
        }
        else if(y>x){
            x1=x+(n-y);
            y1=n;
            x2=n;
            y2=y1-(n-x1);
            x3=x2-y2;
            y3=0;
            x4=0;
            y4=y3+x3;
        }    

        int rem=k%4;

        if(x!=y){  
            if(rem==0){
                ansx=x4;
                ansy=y4;
            }

            else if(rem==1){
                ansx=x1;
                ansy=y1;
            }

            else if(rem==2){
                ansx=x2;
                ansy=y2;
            }

            else if(rem==3){
                ansx=x3;
                ansy=y3;
            }  
        }

        cout<<ansx<<" "<<ansy<<endl;
   }                
   return 0;
}