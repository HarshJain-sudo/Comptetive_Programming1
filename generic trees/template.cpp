#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> &arr,int n,int target){
     int start =0;
     int end = n-1;
     while(start<end){
       int mid = (start+end)/2;
       if(arr[mid]==target)return mid;
       else if(arr[mid]>target){
        end = mid;
       }
       else{
        start = mid;
       }
     }
     return -1;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
     int n,target;
     cin>>n>>target;
     vector<int>arr(n);
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     cout<<binarySearch(arr,n,target);
     // print(arr,n,target);
     return 0;
     // mgnm8011

    
}