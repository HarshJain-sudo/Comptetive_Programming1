#include<bits/stdc++.h>
using namespace std;

class Node{
	Node* right;
	Node* left;
    int val;
};

// Trees Traversal

// 1. Pre-Order Traversal
// node->left->right

void PreOrder(Node * node){
	if(node==NULL){
		return;
	}
	cout<<node->val<<" ";
	PreOrder(node->left);
	PreOrder(node->right);
}

//2. Post-Order Traversal
// left->right->node

void PostOrder(Node * node){
	if(node==NULL){
		return;
	}
	
	PostOrder(node->left);
	PostOrder(node->right);
	cout<<node->val<<" ";
}

//2. In-Order Traversal
// left->node->right

void InOrder(Node * node){
	if(node==NULL){
		return;
	}
	
	PostOrder(node->left);
	cout<<node->val<<" ";
	PostOrder(node->right);
	
}