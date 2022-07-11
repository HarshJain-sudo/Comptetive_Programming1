#include <bits/stdc++.h>
using namespace std;
// #define ulli unsigned long long int;


void solve(){
   int n;
   cin>>n;
   int arr[n];
   int b[n];
   for(int i =0;i<n;i++){
    cin>>arr[i];
    b[i]=arr[i];
   }
   if(n==1){
    cout<<"yes"<<endl;
    cout<<1<<" "<<1<<endl;
    return;
   }
   sort(b,b+n);
   int left =0;
   int right=0;
   for(int i =1;i<n;i++){
    if(arr[i-1]>arr[i]){
        left=i-1;
        break;
    }
   }
   for(int i =n-1;i>0;i--){
    if(arr[i-1]>arr[i]){
        right=i;
        break;
    }
   }
   // cout<<ans<<endl;
    // cout<<left<<" "<<right<<endl;
    int i = left;
    int j = right;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    bool ok = true;
    for(int i =0;i<n;i++){
        if(arr[i]!=b[i]){
            ok = false;
            break;
        }
    }
    if(ok){
        cout<<"yes"<<endl;
        cout<<left+1<<" "<<right+1<<endl;
    }
    else{
        cout<<"no"<<endl;
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
