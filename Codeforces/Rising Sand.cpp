#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
   
   int t;
   cin>>t;
   while(t--){
    int n,k;
    cin>>n>>k;
    vector<long long >arr(n);
    for(int i =0;i<n;i++)cin>>arr[i];
    int peak =0;
    for(int i =1;i<n-1;i++){
        if((arr[i-1]+arr[i+1])<arr[i])peak++;
    }
    if(k==1)cout<<max(peak,(n-1)/2)<<endl;
    else cout<<max(peak,0)<<endl;
    
   }
    
}




 