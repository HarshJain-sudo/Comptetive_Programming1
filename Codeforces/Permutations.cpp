#include <bits/stdc++.h>
using namespace std;
// #define ulli unsigned long long int;


void solve(){
   long long int n;
   cin>>n;
   // long long int arr[n];
     if(n==1)cout<<1<<endl;
     else if(n==2 || n==3)cout<<"NO SOLUTION"<<endl;
     else{
        for(int i =2;i<=n;i+=2){
         cout<<i<<" ";
        }
        for(int i =1;i<=n;i+=2){
         cout<<i<<" ";
        }
        cout<<endl;
     }

}
  

int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    unsigned long long int t;
    // cin>>t;
    // while(t--){
    //     solve();
    // }
    solve();
}
