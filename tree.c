#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node* left;
	struct node* right;
}node;
node* create(){int x;
node* newnode;
newnode=(node*)malloc(sizeof(node));
printf("enter data for the node=");
scanf("%d",&x);
if(x==-1){
	return 0;
}newnode->data=x;
printf("enter the left child for the %d\n",x);
newnode->left=create();
printf("enter the right child for the %d\n",x);
newnode->right=create();
return newnode;
}
void preorder(node* root){
	if(root==NULL){return;
	}printf(" %d ",root->data);
	preorder(root->left);
	preorder(root->right);
}
void level(node* root){
	if(root==NULL){return;
	}else if(level==0){printf(" %d ",root->data);}
	else{level(root->left);
     level(root->right);
	}
}
int main(){node* root=NULL;
root=create();
preorder(root);
level(root);
	
	return 0;
}
