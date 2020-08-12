#include<iostream>

typedef struct T{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x):
		val(x), left(NULL), right(NULL) {}
}TreeNode;

void BST_insert(TreeNode *node, TreeNode *insert_node){
	if(insert_node->val < node->val){ //判断插入结点的值和该节点的大小关系
		if(node->left){ //左子树不为空插入左子树
			BST_insert(node->left, insert_node); //递归
		}
		else{
			node->left = insert_node;
		}
	}
	else{
		if(node->right){
			BST_insert(node->right, insert_node)	
		}
		else{
			node->right = insert_node; //
		}
	}	
}


int main(){
	
	
	return 0;
}
