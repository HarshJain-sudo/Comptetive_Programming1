#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
	int n;
	cin>>n;
	string s;
    cin>>s;
    int start;
    int end;
    for(int i=0;i<n;i++){
    	if(s[i]!='.'){
    		start = i+1;
    		break;
    	}
    }
    bool l= false;
    bool r= false;
    for(int i=0;i<n;i++){
       if(s[i]=='L')l=true;
       if(s[i]=='R')r=true;
    }
     if(l && r ){
     	for(int i=0;i<n-1;i++){
     		if(s[i]=='R' && s[i+1]=='L')
     			{
     				end = i+1;
     				break;
     			}
     	}
     }
     else{
     	for(int i=n-1;i>=0;i--){
     		if(s[i]!='.'){
     			end= i+1;
     			break;
     		}
     	}
     }
     cout<<start<<" "<<end<<endl;
}