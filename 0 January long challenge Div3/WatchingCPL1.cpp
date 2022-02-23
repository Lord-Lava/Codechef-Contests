#include <iostream>
#include <algorithm>
#include<vector>
#include<climits>
                   
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

    //    cout<<"sum:"<<sum<<endl;//

       if(sum==2*k){
           ans=n;
       }

       if(sum>2*k){
            sort(arr.begin(),arr.end(),greater<int>());

            int isum=0,idiff=0,fsum=0;
            int count=0;

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
                    if(i==1){
                        arr.erase(arr.begin());
                    }
                    else{
                        arr.erase(arr.begin(),arr.begin()+i-1);
                    }
                    // for(int i=0;i<arr.size();i++){//
                    //     cout<<arr[i]<<" ";
                    // }//
                    break;
                } 
            }

            int c=arr.size();
            // cout<<"c1:"<<c<<endl;//

            idiff=k-isum;
            cout<<"idiff1:"<<idiff<<endl;//

            int mindiff=INT_MAX;
            int v=-1,nt=-1,o=-1;
            int currDiff=idiff-arr[0];
            int flag=0;

            for(int i=0;i<arr.size();i++){//
                cout<<arr[i]<<" ";
            }
            cout<<endl;//
            if(idiff>0){
                while(arr.size()!=0){
                    for(int i=0;i<arr.size();i++){
                        currDiff=idiff-arr[i];
                        cout<<"cxd"<<currDiff<<endl;//
                        if(currDiff==0){
                            o=i;
                            flag=1;
                            break;
                        }
                        else if(currDiff<0){
                            int mindiff2=INT_MIN;
                                if(currDiff>mindiff2){
                                    mindiff=currDiff;
                                    nt=i;
                                    cout<<"nt: "<<nt<<endl;//
                                }
                            flag==2;
                        }
                        else if(currDiff>0 && flag!=2){
                            if(currDiff<mindiff){
                                mindiff=currDiff;
                                v=i;
                            }
                        }
                    }
                    cout<<"flg: "<<flag<<endl;//
                    if(flag==0){
                        idiff-=arr[v];
                        arr.erase(arr.begin()+v);

                        for(int i=0;i<arr.size();i++){//
                        cout<<"v"<<arr[i]<<" ";
                        }//

                        cout<<endl;
                    }
                    
                    else if(flag=1){
                        idiff-=arr[o];
                        cout<<"idiff"<<idiff<<endl;
                        arr.erase(arr.begin()+o);

                        for(int i=0;i<arr.size();i++){//
                        cout<<"o"<<arr[i]<<" ";
                        }//

                        cout<<endl;
                        break;
                    }
                    else if(flag==2){
                        idiff-=arr[nt];
                        arr.erase(arr.begin()+nt);

                        for(int i=0;i<arr.size();i++){//
                        cout<<"n"<<arr[i]<<" ";
                        }//

                        cout<<endl;
                        break;
                    }
                }
            }

            c-=arr.size();
            count+=c;

            for(int i=0;i<arr.size();i++){
                fsum+=arr[i];
                count++;
                if(fsum>=k){
                    break;
                }
            }
            ans=count;
       }
       cout<<ans<<endl;
   }   
     return 0;

   } 

   //agar 2 dabba last me rakhne se equal aa rha hai aur 1 dabba se possible na ho karna toh uska alag case likho          