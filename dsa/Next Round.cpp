#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
	int n,k;
	cin>>n>>k;
	int count=0;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
		
	}
	for(int i=0;i<n;i++){
		if( v[i]>0 && v[i]>=v[k-1])count++;
		
	}
	cout<<count<<endl;

}