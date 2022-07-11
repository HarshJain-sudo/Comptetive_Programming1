#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
     int n;
     cin>>n;
     vector<int>nums(n);
     for(int i=0;i<n;i++){
        cin>>nums[i];
     }
     int ans =0;
     int passenger=0;
     sort(nums.begin(),nums.end());
     for(int i=0;i<n;i++){
       passenger+=nums[i];
       if(passenger==4)ans++;
       else if(passenger>4){
         ans++;
         passenger= nums[i];
       }
       else passenger+=nums[i];

     }
     cout<<ans<<endl;
    
}
