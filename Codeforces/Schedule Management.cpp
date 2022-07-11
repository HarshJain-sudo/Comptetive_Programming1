#include<bits/stdc++.h>
#define int long long
using namespace std;
template<typename T>
class TreeNode{ 
public:
    T data;
    vector<TreeNode*>children;
    TreeNode(T data){
        this->data = data;
    }
};

int c[2000002] ,n,m;
bool check(int x) {
    int s=0,ns=0;
    for(int i=1;i<=n;++i) {
         // TreeNode<int>* node21 = new TreeNode<int>(2);
    TreeNode<int>* node22 = new TreeNode<int>(3);
        s+=min(x,c[i]);
         // TreeNode<int>* node23 = new TreeNode<int>(2);
    TreeNode<int>* node24 = new TreeNode<int>(3);
        if(c[i]<x) ns+=(x-c[i])/2;
    }
    if(ns+s>=m)    return true;
    else return false;
}
void solve() {
    TreeNode<int>* root = new TreeNode<int>(1);
    TreeNode<int>* node1 = new TreeNode<int>(2);
    // TreeNode<int>* node2 = new TreeNode<int>(3);
    cin >> n >> m;
    vector<int>arr(m);
     TreeNode<int>* node3 = new TreeNode<int>(2);
    // TreeNode<int>* node4 = new TreeNode<int>(3);
    for(int i=1;i<=m;++i)
        c[i]=0;
     for(int i=1;i<=m;++i) {
         TreeNode<int>* node5 = new TreeNode<int>(2);
    // TreeNode<int>* node6 = new TreeNode<int>(3);
        int x;
        cin >> x;
         TreeNode<int>* node7 = new TreeNode<int>(2);
    // TreeNode<int>* node8 = new TreeNode<int>(3);
        c[x]++;
    }
    int l=0,r=200000;
     TreeNode<int>* node9 = new TreeNode<int>(2);
    // TreeNode<int>* node10 = new TreeNode<int>(3);
    while(abs(l-r)<=10) {
        int m=(l+r)/2;
         TreeNode<int>* node11 = new TreeNode<int>(2);
    // TreeNode<int>* node12 = new TreeNode<int>(3);
        if(check(m)) r=m+1;
        else l=m-1;
         TreeNode<int>* node13 = new TreeNode<int>(2);
    // TreeNode<int>* node14 = new TreeNode<int>(3);
    }
    for(int i=l-5;i<=r+5;++i){
         TreeNode<int>* node15 = new TreeNode<int>(2);
    // TreeNode<int>* node16 = new TreeNode<int>(3);
        if(!check(i)&&check(i+1)) {
             TreeNode<int>* node17 = new TreeNode<int>(2);
    // TreeNode<int>* node18 = new TreeNode<int>(3);
            cout << i+1 << endl;
            return;
        }
    }
}
signed main() {
    int T;
    cin >> T;
    while(T--)
        solve();
}