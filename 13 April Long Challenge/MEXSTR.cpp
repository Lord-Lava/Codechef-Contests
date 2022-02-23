#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int mod = 1e9 + 7;

string intTobin(int n){
    int x=1;
    int ans  = 0;
    while(x<=n){
        x*=2;
    }
    x/=2;

    while(x>0){
        int lastdigit  = n/x;
        n-=lastdigit*x;
        x/=2;
        ans = ans*10 + lastdigit;
    }
    string a = to_string(ans);
    return a;
}

unordered_set<string> st;

void subsequence(string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		for (int j = str.length(); j > i; j--)
		{
			string sub_str = str.substr(i, j);
			st.insert(sub_str);

			for (int k = 1; k < sub_str.length() - 1; k++)
			{
				string sb = sub_str;

				sb.erase(sb.begin() + k);
				subsequence(sb);
			}
		}
	}
}

void solve(){
    string s;
    cin>>s;

    subsequence(s);

    int ans=0;

    string a=intTobin(ans);
    
    while(1){
        if (st.find(a) == st.end()){
            cout<<a<<endl;
            st.clear();
            return;
        }
        ans++;
        a=intTobin(ans);
    }
}

signed main(){
    boost

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}