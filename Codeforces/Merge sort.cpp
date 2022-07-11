 #include<bits/stdc++.h>
using namespace std;
vector<int>temp;
void merge(vector<int> & arr,int start,int end){
    int i = start;
    int mid = (start+end)/2;
    int j = mid+1;
    while(i<=mid && j<=end){
      if(arr[i]<=arr[j]){
         temp.push_back(arr[i]);
         i++;
      }
      else{
         temp.push_back(arr[j]);
         j++;
      }
    }
    while(i<=mid){
      temp.push_back(arr[i]);
      i++;
    }
    while(j<=end){
      temp.push_back(arr[j]);
      j++;
    }
    i =0;
    for(int k=start;k<=end;k++){
      arr[k]=temp[i];
      i++;
    }
    return;
}
void mergeSort(vector<int> &arr,int start,int end){
   if(start>=end)return;
   int mid = (start+end)/2;
   mergeSort(arr,start,mid);
   mergeSort(arr,mid+1,end);
   // for(auto x : arr)cout<<x<<" ";
    merge(arr,start,end);
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
    for(int i=0;i<n;i++)cin>>arr[i];
    mergeSort(arr,0,n-1);
    // cout<<endl;
    for(auto x : arr){
      cout<<x<<" ";
   }
   
}


// 3 4 6          8 5 2 
// 3 4  6         8 5   2
// 3 4 6          8   5  2
 // 3 4  6               2  5  8   


