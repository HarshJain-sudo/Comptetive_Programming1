#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int a =0;
    int b =0;
    int c =0;
    for(int i =0;i<3;i++){
        string s ;
        cin>>s;
        if(s[1]=='>'){
            if(s[0]=='A'){
                a++;
            }
            else if(s[0]=='B'){
                b++;
            }
            else{
                c++;
            }
        }
        else{
            if(s[2]=='A'){
                a++;
            }
            else if(s[2]=='B'){
                b++;
            }
            else{
                c++;
            }
        }
    }
    if(a==b || b==c||c==a){
        cout<<"Impossible"<<endl;
    }
    else{
    string ans ="";
    if(a==0){
        ans+='A';
    }
    if(b==0){
        ans+='B';
    }
    if(c==0){
        ans+='C';
    }
    if(a==1){
        ans+='A';
    }
    if(b==1){
        ans+='B';
    }
    if(c==1){
        ans+='C';
    }
    if(a==2){
        ans+='A';
    }
    if(b==2){
        ans+='B';
    }
    if(c==2){
        ans+='C';
    }
    cout<<ans<<endl;
}
}