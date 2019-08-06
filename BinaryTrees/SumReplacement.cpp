//replace each node w the sum of its child nodes -- dont change leaf nodes
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
int sumReplacement(node* root){
	if(root == NULL){
		return 0;
	}
	if(root->left == NULL && root->right == NULL){
		return root->data;
	}
	int temp = root->data;
	root->data = sumReplacement(root->left) + sumReplacement(root->right);
	return root->data + temp;
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
	node* root = buildTree();
	printLevelorder(root);
	sumReplacement(root);
	printLevelorder(root);
	return 0;
}