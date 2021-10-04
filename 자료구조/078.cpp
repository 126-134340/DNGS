//�ڷ� ���� p.78 <���� Ʈ�� ��ȸ �˰���> 

//        15
//   4         20
//1         16    25

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>  //�޸� �Ҵ�, ������ ���� ���� 

typedef struct TreeNode{
	int data;
	struct TreeNode *left, *right;  //�ڱ����� ����ü 
}TreeNode;  //�ڷ����� �̸�, ��κ� ����ζ� ���� �̸� 
//������ �� �ڷ��� ���� 

TreeNode n1 = {1, NULL, NULL};
TreeNode n2 = {4, &n1, NULL};
TreeNode n3 = {16, NULL, NULL};
TreeNode n4 = {25, NULL, NULL};
TreeNode n5 = {20, &n3, &n4};
TreeNode n6 = {15, &n2, &n5};
TreeNode *root = &n6;

void inorder(TreeNode *root){
	if(root){
		inorder(root->left);
		printf("[%d] ", root->data);
		inorder(root->right);
	}
}

void preorder(TreeNode *root){
	if(root){
		printf("[%d] ", root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

void postorder(TreeNode *root){
	if(root){
		postorder(root->left);
		postorder(root->right);
		printf("[%d] ", root->data);
	}
}

int main(){
	printf("���� ��ȸ�� ��� : ");
	inorder(root);
	printf("\n");
	printf("���� ��ȸ�� ��� : ");
	preorder(root);
	printf("\n");
	printf("���� ��ȸ�� ��� : ");
	postorder(root);
	printf("\n");
	
	return 0;
}


//[INPUT]
//(����)
//
//
//[OUTPUT]
//���� ��ȸ�� ��� : [1] [4] [15] [16] [20] [25]
//���� ��ȸ�� ��� : [15] [4] [1] [20] [16] [25]
//���� ��ȸ�� ��� : [1] [4] [16] [25] [20] [15]
