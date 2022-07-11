#include<bits/stdc++.h>
#include "TreeNode.h"
using namespace std;

TreeNode<int>* takeInputLevelWise(){
	int rootData;
	cout<<"Enter root Data"<<endl;
	cin>>rootData;
	TreeNode<int>* root  = new TreeNode<int>(rootData);
	
	queue<TreeNode<int>*> pendingNodes;
	pendingNodes.push(root);

	while(pendingNodes.size() != 0){
		TreeNode<int>* front = pendingNodes.front();
		pendingNodes.pop();
		cout<<"Enter number of children of "<<front->data<<endl;
		int numChild;
		cin>>numChild;
		for(int i=0;i<numChild;i++){
			int childData;
			cout<<"Enter "<<i<<" th child of "<<front->data<<endl;
			cin>>childData;
			TreeNode<int>* child = new TreeNode<int>(childData);
			front->children.push_back(child);
			pendingNodes.push(child);
		}
	}
	return root;
}

TreeNode<int>* takeInput(){
	int rootData;
	cout<<"Enter rootData :"<<endl;
	cin>>rootData;
	TreeNode<int>* root = new TreeNode<int>(rootData);
	int n;
	cout<<"Enter number of children of "<<rootData<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		TreeNode<int>* child = takeInput();
		root->children.push_back(child);
	}
	return root;
}

void PrintTree(TreeNode<int>* root){
	// this is not base case this is a edge case
	if(root==NULL){
		return;                
	}
	cout<<root->data<<":";
	for(int i=0;i<root->children.size();i++){
		cout<<root->children[i]->data<<" ";
	}
	cout<<endl;
	for(int i=0;i<root->children.size();i++){
		PrintTree(root->children[i]);
	}
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    // lectur 1  start  (implement a tree)

	// TreeNode<int>* root = new TreeNode<int>(1);
	// TreeNode<int>* node1 = new TreeNode<int>(2);
	// TreeNode<int>* node2 = new TreeNode<int>(3);
	// root->children.push_back(node1);
	// root->children.push_back(node2);

	// Lecture 1 end

	// lectur 2  start (take input and print)

	// TreeNode<int>* root = takeInput();
    // PrintTree(root);

    // Lecture 2 End 

    // Lecture 3 start (take input level wise)
      TreeNode<int>* root = takeInputLevelWise();
      PrintTree(root);

    
    // TODO DELETE TREE
}