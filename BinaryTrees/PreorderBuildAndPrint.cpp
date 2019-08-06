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
void printTreePreorder(node* root){
	// root left right
	if(root == NULL){
		return;
	}
	cout << root->data << " ";
	printTreePreorder(root->left);
	printTreePreorder(root->right);
}
void printTreeInorder(node* root){
	//left root right
	if(root == NULL){
		return;
	}
	printTreeInorder(root->left);
	cout << root->data << " ";
	printTreeInorder(root->right);
}
void printTreePostorder(node* root){
	//left right root
	if(root == NULL){
		return;
	}
	printTreePostorder(root->left);
	printTreePostorder(root->right);
	cout << root->data << " ";
}
int heightOfTree(node* root){
	if(root == NULL){
		return 0;
	}
	int lh = heightOfTree(root->left);
	int rh = heightOfTree(root->right);
	return max(lh, rh) + 1;
}
void printKthLevel(node* root, int level){
	if(root == NULL){
		return;
	}
	if(level == 1){
		cout << root->data << " ";
		return;
	}
	printKthLevel(root->left, level - 1);
	printKthLevel(root->right, level - 1);
}
void printLevelorder(node* root){
	for(int i = 1; i <= heightOfTree(root); i++){
		printKthLevel(root, i);
		cout << endl;
	}
}
int main(){
	node* tree1 = buildTree();
	printTreePreorder(tree1);
	cout << endl;
	printTreeInorder(tree1);
	cout << endl;
	printTreePostorder(tree1);
	cout << endl;
	printLevelorder(tree1);
	cout << endl;
	return 0;
}