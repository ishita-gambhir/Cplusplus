// to check if a given binary tree is balanced or not
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
	int data;
	cin >> data;
	if(data == -1){
		return NULL;
	}
	node* root = new node(data);
	root->left = buildTree();
	root->right = buildTree();
}
struct Pair{
	bool balance;
	int height;
};
Pair isBalancedHeightTree(node* root){
	Pair p;
	if(root == NULL){
		p.height = 0;
		p.balance = true;
		return p;
	}
	Pair left = isBalancedHeightTree(root->left);
	Pair right = isBalancedHeightTree(root->right);
	p.height = max(left.height, right.height) + 1;
	p.balance = ((abs(left.height - right.height) <= 1) && left.balance && right.balance);
	return p;
}
int main(){
	node* root = buildTree();
	Pair p = isBalancedHeightTree(root); 
	p.balance ? cout << "Yes" : cout << "No";
	return 0;
}