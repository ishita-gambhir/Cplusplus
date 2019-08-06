#include<iostream>
#include<queue>
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
void BFS(node* root){
	queue<node*> q1;
	q1.push(root);
	q1.push(NULL);
	while(!q1.empty()){
		if(q1.front() == NULL){
			cout << endl;
			q1.pop();
			if(!q1.empty()){
				q1.push(NULL);
			}
		}
		else{
			if(q1.front()->left != NULL){
				q1.push(q1.front()->left);	
			}
			if(q1.front()->right != NULL){
				q1.push(q1.front()->right);
			}
			cout << q1.front()->data << " ";
			q1.pop();
		}
	}
};
int main(){
	node* tree1 = buildTree();
	BFS(tree1);
	return 0;
}