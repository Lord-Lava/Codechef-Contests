#include <bits/stdc++.h>

#define ll long long int

using namespace std;

bool isSorted(int n, int arr[]){
    
    int ctr=0;

    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1])
            ctr++;
    }        

    if(ctr==n)
        return 1;

    return 0;    
}

bool isIndexSorted(vector<pair<int,int>> v){
    
    bool flag=0;

    for(int i=0;i<v.size()-1;i++){
        if(v[i].second>v[i+1].second)
            flag=1;
    }        

    if(flag==0)
        return 1;

    return 0;    
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin>>n;

        int weight[n];
        int jump[n];

        for(int i=0;i<n;i++){
            cin>>weight[i];
        }

        for(int i=0;i<n;i++){
            cin>>jump[i];
        }

        vector <pair<int,int>> v;
        vector <pair<int,int>> jp;
        for (int i = 0; i < n; i++)
        {
            v.push_back(make_pair(weight[i],i));
            jp.push_back(make_pair(weight[i],jump[i]));
        }
        
        int ans=0;

        if(!isSorted(n,weight)){
            while(1){
            int ctr = 0;
                for(int i=v.size()-1;i>=0;i--){
                    if(weight[i]!=i+1){
                        v[i].second+=jp[v[i].first].second;
                        ctr++;
                        if(isIndexSorted(v)){
                            ans=ctr;
                            break;
                        }
                    }
                }
            }    
        }

        cout<<ans<<endl;

    }

    return 0;
}