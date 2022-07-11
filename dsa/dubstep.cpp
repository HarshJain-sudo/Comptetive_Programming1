#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
	string s;
	// cout<<"HELLO";
	cin>>s;
	string ans="";
	bool flag=true;
	for(int i=0;i<s.length();i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
        	if(!flag){
        		ans+=" ";
        		flag=true;
        	}
        	i+=2;
        }
        else{
        	ans+=s[i];
        	flag=false;
        }

	}
	cout<<ans<<endl;
}