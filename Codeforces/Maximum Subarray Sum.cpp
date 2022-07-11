 #include<bits/stdc++.h>
using namespace std;
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
    int i=0;
    for( i=0;i<n;i++){
        cin>>arr[i];
    }
   for(i=n-2;i>=0;i--){
    if(arr[i]<arr[i+1])break;
   }
   if(i<0)reverse(arr.begin(),arr.end());
   else{
         for(int l = arr.size()-1;l>=i;l--){
            if(arr[l]>arr[i]){
            swap(arr[i],arr[arr.size()-1]);
            reverse(arr.begin()+i+1,arr.end());
            return;
        }
        }
    }
}




