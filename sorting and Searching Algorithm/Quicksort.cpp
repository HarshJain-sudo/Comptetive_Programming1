#include<bits/stdc++.h>
using namespace std;
int Partition(vector<int> &arr,int s, int e){
    int pivot = arr[e];
    int i = s-1;
    for(int j=s;j<e;j++){
        if(arr[j]>pivot)continue;
        else{
            i++;
            swap(arr[i],arr[j]);
        }
    }
    // arr[i+1] = pivot;
    swap(arr[i+1],arr[e]);
    return i+1;
}
void QuickSort(vector<int> &arr,int s,int e){
    if(s>=e)return;

    int p = Partition(arr,s,e);
    QuickSort(arr,s,p-1);
    QuickSort(arr,p+1,e);
    return;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
     int n,target;
     cin>>n;
     vector<int>arr(n);
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     QuickSort(arr,0,n-1);
     for(auto x : arr){
        cout<<x<<" ";
     }
     return 0;
     // mgnm8011

    
}