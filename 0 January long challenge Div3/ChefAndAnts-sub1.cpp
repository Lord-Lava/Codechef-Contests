#include <iostream>
#define ll long long int
using namespace std;
                   
int main(){
   int t;
   cin>>t;

   while(t--){
       int n;
       cin>>n;

       int m;
       cin>>m;

       int arr[m];

       for(int i=0;i<m;i++){
           cin>>arr[i];
       }

        ll ans=0;

        ll posC=0,negC=0;
        for (int i = 0; i < m; i++)
        {
            if (arr[i]>=0)
            {
                posC++;
            }
            else{
                negC++;
            }
        }

        ans=posC*negC;
        
        cout<<ans*n<<endl;
        
   }
                   
   return 0;
}