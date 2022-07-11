#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr,int s,int e){
   int i = s;
   int m = (s+e)/2;
   int j = m+1;

   vector<int>temp;

   while(i<=m and j<=e){
      if(arr[i]>arr[j]){
         temp.push_back(arr[j]);
         j++;
      }
      else{
         temp.push_back(arr[i]);
         i++;
      }
   }
   while(i<=m){
      temp.push_back(arr[i]);
      i++;
   }
   while(j<=e){
         temp.push_back(arr[j]);
         j++;
   }
   i=0;
   for(int k=s;k<=e;k++){
      arr[k]= temp[i];
      i++;
   }
   return ;
}

void MergeSort(vector<int> &arr,int s,int e){
   if(s>=e)return;
      int mid = (s+e)/2;
      MergeSort(arr,s,mid);
      MergeSort(arr,mid+1,e);
      merge(arr,s,e);
    
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
     int n;
     cin>>n;
     vector<int>arr(n);
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     int s=0;
     int e = n-1;
     MergeSort(arr,s,e);
     for(auto x : arr){
      cout<<x<<" ";
     }
     return 0;
     // mgnm8011

    
}