#include <bits/stdc++.h>
using namespace std;
// #define ulli unsigned long long int;


void solve(){
    int arr[2][2];
    int one =0;
    int zero = 0;
    for(int i =0;i<2;i++){
      for(int j =0;j<2;j++){
         cin>>arr[i][j];
         if(arr[i][j]==1)one++;
         else zero++;
      }
    }
    if(zero == 4){
      cout<<"0"<<endl;
    }
    else if(one ==1 || one == 2 || one ==3 ){
      cout<<"1"<<endl;
    }
    else if( one ==4){
      cout<<"2"<<endl;
    }
   return ;
}
  

int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    unsigned long long int t;
    cin>>t;
    while(t--){
        solve();
    }
    // solve();
}
