#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    string s;
    cin>>s;
    if(s.length()<2){
        cout<<0<<endl;
        return 0;
    }
    long long int count =0;
    long long int x = 11;
    while(x>=10){
        count++;
         x = 0;
        // cout<<"aagya"<<endl;
        for(int i =0;i<s.length();i++){
            x = x + (s[i]-'0');
        }
        s = to_string(x);
    }
    cout<<count<<endl;
}