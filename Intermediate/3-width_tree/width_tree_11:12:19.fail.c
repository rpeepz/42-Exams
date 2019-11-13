struct s_node
{
	int value;
	struct s_node *left;
	struct s_node *right;
};

int	traverse(struct s_node *n, int *c, int w)
{
	if (!n)
		return (1);
	w += traverse(n->left, c, w);
	w += traverse(n->right, c, w);
	
	return (w);
}

int	width_tree(struct s_node *n)
{
	int width = 1; 
	printf("[%d]\n", traverse(n, &width, 0));
	return width;
}

#include <stdio.h>
#include <stdlib.h>
int main(){
	struct s_node *n1 = malloc(sizeof(n1));
	struct s_node *n2 = malloc(sizeof(n1));
	struct s_node *n5 = malloc(sizeof(n1));
	struct s_node *n3 = malloc(sizeof(n1));
	struct s_node *n4 = malloc(sizeof(n1));
	struct s_node *n6 = malloc(sizeof(n1));
	struct s_node *n7 = malloc(sizeof(n1));
	struct s_node *n8 = malloc(sizeof(n1));
	struct s_node *n9 = malloc(sizeof(n1));
	struct s_node *n0 = malloc(sizeof(n1));
	
	n1->left = n2;
	n1->right = n5;

	n2->left = n3;
	n2->right = n4;

	n3->left = NULL;
	n3->right = NULL;

	n4->left = n6;
	n4->right = NULL;

	n5->left = n7;
	n5->right = n8;

	n6->left = NULL;
	n6->right = NULL;

	n7->left = NULL;
	n7->right = NULL;

	n8->left = NULL;
	n8->right = NULL;
	printf("%d\n", width_tree(n1));
}
