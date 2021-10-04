//자료 구조 p.78 <이진 트리 순회 알고리즘> 

//        15
//   4         20
//1         16    25

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>  //메모리 할당, 포인터 연산 목적 

typedef struct TreeNode{
	int data;
	struct TreeNode *left, *right;  //자기참조 구조체 
}TreeNode;  //자료형의 이름, 대부분 선언부랑 같은 이름 
//구조로 된 자료형 선언 

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
	printf("중위 순회의 결과 : ");
	inorder(root);
	printf("\n");
	printf("전위 순회의 결과 : ");
	preorder(root);
	printf("\n");
	printf("후위 순회의 결과 : ");
	postorder(root);
	printf("\n");
	
	return 0;
}


//[INPUT]
//(없음)
//
//
//[OUTPUT]
//중위 순회의 결과 : [1] [4] [15] [16] [20] [25]
//전위 순회의 결과 : [15] [4] [1] [20] [16] [25]
//후위 순회의 결과 : [1] [4] [16] [25] [20] [15]
