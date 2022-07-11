#include <bits/stdc++.h>
using namespace std;
// #define ulli unsigned long long int;


void solve(){
   int n ;
   cin>>n;
   int arr[n];
   for(int i =0;i<n-1;i++)cin>>arr[i];
      int mini = INT_MAX;
       int pos ;
       for(int i =0;i<n-1;i++){
         if(abs(arr[i]-arr[i+1])<=mini){
           pos = i;
           mini = abs(arr[i]-arr[i+1]);

         }
       }
       cout<<mini<<endl;
       int mini2 = abs(arr[0]-arr[n-1]);
       cout<<mini2<<endl;
       if(mini2<mini){
         cout<<"aagya"<<endl;
         cout<<n<<" "<<1<<endl;
         return;
       }
       cout<<pos+1<<" "<<pos+2<<endl;
       return;
   

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
    // while(t--){
    //     solve();
    // }
    solve();
}
