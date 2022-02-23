#include <iostream>
#include <algorithm>
#include<vector>
                   
using namespace std;
                   
int main(){
   int t;
   cin>>t;

   while(t--){
       int n,k;
       cin>>n>>k;

       vector<int>arr;

       int sum=0;
       int ans=-1;

       for (int i = 0; i < n; i++)
       {
           int x;
           cin>>x;
           arr.push_back(x);
           sum+=arr[i];
       }

    //    cout<<sum<<endl;

       if(sum==2*k){
           ans=n;
       } //check if aage ans change ho raha h kya ?!

       if(sum>2*k){
            sort(arr.begin(),arr.end(),greater<int>());

            int isum=0,idiff=0,fsum=0;
            int count=0;
            int s=0,e=0;

            for(int i=0;i<n;i++){
                isum+=arr[i];
                count++;

                if(isum==k){
                    arr.erase(arr.begin(),arr.begin()+i);
                    break;
                }

                else if(isum>k && i==0){
                    arr.erase(arr.begin());
                    break;
                }

                else if(isum>k){
                    isum-=arr[i];
                    count--;
                    arr.erase(arr.begin(),arr.begin()+i-1);
                    break;
                } 
            }

            // cout<<isum;

            idiff=k-isum;

            // for(int i=0;i<arr.size();i++){
            //     cout<<arr[i]<<" ";
            // }

            if(idiff<=0){
                reverse(arr.begin(), arr.end());
            }

            // if(idiff>0){
            //     reverse(arr.begin(), arr.end());

                // for(int i=0;i<arr.size();i++){
                // cout<<arr[i]<<" ";
                // }

                // int j=0;

                // for(int i=0;i<arr.size();i++){
                //     fsum+=arr[i];
                //     count++;

                //     if(fsum==idiff){
                //         arr.erase(arr.begin(),arr.begin()+i);
                //         break;
                //     }

                //     if(fsum>idiff){
                //         while(fsum>idiff){
                //             fsum-=arr[j];
                //             if(fsum<idiff){
                //                 fsum+=arr[j];
                //                 break;
                //             }
                //             count--;
                //             j++;
                //         }
                //         arr.erase(arr.begin()+j,arr.begin()+i);
                //         break;
                //     }
                // }
            // }

            // for(int i=0;i<arr.size();i++){
            //     cout<<arr[i]<<" ";
            // }

            reverse(arr.begin(), arr.end());

            int ThreeSome=0;

            for(int i=0;i<arr.size();i++){
                ThreeSome+=arr[i];
                count++;
                if(ThreeSome>=k){
                    break;
                }
            }
            ans=count;
       }

       cout<<ans<<endl;
       
   }
                   
   return 0;
}