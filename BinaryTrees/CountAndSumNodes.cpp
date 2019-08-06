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
int countTreeNodes(node* root){
	if(root == NULL){
		return 0;
	}
	return countTreeNodes(root->left) + countTreeNodes(root->right) + 1;
}
int sumTreeNodes(node* root){
	if(root == NULL){
		return 0;
	}
	return sumTreeNodes(root->left) + sumTreeNodes(root->right) + root->data;
}
int main(){
	node* tree = buildTree();
	cout << countTreeNodes(tree) << endl;
	cout << sumTreeNodes(tree) << endl;
	return 0;
}