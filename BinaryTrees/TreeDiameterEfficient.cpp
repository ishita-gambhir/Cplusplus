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
struct Pair{
	int height;
	int diameter;
};
Pair TreeDiameterEfficient(node* root){
	Pair p;
	if(root == NULL){
		p.height = p.diameter = 0;
		return p;
	}
	Pair left = TreeDiameterEfficient(root->left);
	Pair right = TreeDiameterEfficient(root->right);
	p.height = max(left.height, right.height) + 1;
	p.diameter = max(left.height + right.height, max(left.diameter, right.diameter));
	return p;
}
int main(){
	node* root = buildTree();
	Pair p = TreeDiameterEfficient(root);
	cout << p.diameter << endl;
	return 0;
}