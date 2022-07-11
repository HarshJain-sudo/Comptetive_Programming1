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
    int n;
    cin>>n;
    int arr[n];
    int res;
     for(int i =0;i<n;i++)cin>>arr[i];
        for(int i = 0;i<n;i++){
            res =0;
            for(int j =0;j<n;j++){
                if(i==j)continue;
                else{
                    res = res^arr[j];
                }
            }
            if(res==arr[i]){
               break;
            }
        }
    cout<<res<<endl;
   }
    
}




 