#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const int mod = 1e9 + 7;

bool isPrime(int n)  
{   
    if (n <= 1)  return false;  
    if (n <= 3)  return true;  
     
    if (n%2 == 0 || n%3 == 0) return false;  
    
    for (int i=5; i*i<=n; i=i+6)  
        if (n%i == 0 || n%(i+2) == 0)  
           return false;  
    
    return true;  
}  
  
int nextPrime(int N) 
{ 
    if (N <= 1) 
        return 2; 
  
    int prime = N; 
    bool found = false; 
  
    while (!found) { 
        prime++; 
  
        if (isPrime(prime)) 
            found = true; 
    } 
  
    return prime; 
} 

void solve(){
    ll l,r;
    cin>>l>>r;

    cout<<nextPrime(r)<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}