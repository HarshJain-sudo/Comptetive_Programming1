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
    vector<int>arr(n+1);
    arr[0]=1;
    // arr[1]=1;
    for(int i=2;i<=n;i++){
        if(arr[i])continue;
        for(int j= 2*i;j<=n;j+=i){
            arr[j]=i;
        }
    }
    int count=0;
    for(int i=2;i<arr.size();i++){
        if(arr[i]==0)count++;
    }
    cout<<count;    
}


// Time complexity of sieve of eratosthenes 
// O(nlog(log(n)))
// space O(n)


