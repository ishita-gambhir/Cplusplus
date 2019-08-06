#include<iostream>
using namespace std;
class node{
public:
	int data;
	node* left;
	node* right;
	node(int d){
		data = d;
		left = NULL;
		right = NULL;
	}
};
node* buildTree(){
	int d;
	cin >> d;
	if(d == -1){
		return NULL;
	}
	node* root = new node(d);
	root->left = buildTree();
	root->right = buildTree();
	return root;
}
int treeHeight(node* root){
	if(root == NULL){
		return 0;
	}
	return max(treeHeight(root->left), treeHeight(root->right)) + 1;
}
int treeDiameter(node* root){
	if(root == NULL){
		return 0;
	}
	return max((treeHeight(root->left) + treeHeight(root->right)), max(treeDiameter(root->left), treeDiameter(root->right)));
}
int main(){
	node* root = buildTree();
	cout << treeDiameter(root) << endl;
	return 0;
}