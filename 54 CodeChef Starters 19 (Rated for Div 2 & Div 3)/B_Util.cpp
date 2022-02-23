#include<bits/stdc++.h>
using namespace std;
const  int M = 1000000007;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		map<long long,long long> mp;
		long long ele;
		for(int i=0;i<n;i++){
			cin>>ele;
			mp[ele]++;
		}
		long long int ans=pow(2,mp.size()-1);
		for(auto i:mp){
			long long int b=i.second;
			long long int mv=b;
			ans=((ans%M)+(mv%M))%M;
		}
		cout<<ans-1<<"\n";
 
	}
	return 0;
}