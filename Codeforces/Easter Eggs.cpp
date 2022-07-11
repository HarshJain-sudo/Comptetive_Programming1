#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    string ans ="";
    for(int i=0;i<n;i++){
        if(i%7==0){
            ans+='R';
        }
        else if(i%7==1){
            ans+='Y';
        }
        else if(i%7==2){
            ans+='O';
        }
        else if(i%7==3){
            ans+='G';
        }
        else if(i%7==4){
            ans+='B';
        }
        else if(i%7==5){
            ans+='I';
        }
        else if(i%7==6){
            ans+='V';
        }
        
    }
        if(n%7==1){
            ans+='O';
        }
        else if(n%7==2){
            ans+="OY";
        }
        else if(n%7==3){
            ans+= "OYG";
        }
        else if(n%7==4){
            ans+= "OYGB";
        }
        else if(n%7==5){
            ans+= "OYGBI";
        }
        else if(n%7==6){
            ans+= "OYGBIV";
        }
    cout<<ans<<endl;
}