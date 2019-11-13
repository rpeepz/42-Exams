#include <stdlib.h>
#include <stdio.h>

struct s_node
{
	int value;
	struct s_node *left;
	struct s_node *right;
};

int		longest_sequence(struct s_node *node);

int		main(void){
	printf("len = %d\n", longest_sequence(NULL));


	struct s_node *node = malloc(sizeof(struct s_node));
	node->right = NULL;
	node->left = NULL;
	node->value = 5;
	printf("len = %d\n", longest_sequence(node));

	node->left = malloc(sizeof(struct s_node));
	node->left->value = 6;
	node->left->left = NULL;
	node->left->right = NULL;

	node->right = malloc(sizeof(struct s_node));
	node->right->value = 4;
	node->right->right = NULL;
	node->right->left = NULL;

	node->right->left = malloc(sizeof(struct s_node));
	node->right->left->right = NULL;
	node->right->left->left = NULL;
	node->right->left->value = 9;

	node->right->left->left = malloc(sizeof(struct s_node));
	node->right->left->left->right = NULL;
    node->right->left->left->left = NULL;
    node->right->left->left->value = 2;

	node->right->left->right = malloc(sizeof(struct s_node));
	node->right->left->right->left = NULL;
    node->right->left->right->right = NULL;
    node->right->left->right->value = 2;

	node->right->right = malloc(sizeof(struct s_node));
    node->right->right->left = NULL;
    node->right->right->right = NULL;
    node->right->right->value = 3;

	node->right->right->right = malloc(sizeof(struct s_node));
    node->right->right->right->left = NULL;
    node->right->right->right->right = NULL;
    node->right->right->value = 2;
	printf("len = %d\n", longest_sequence(node));
	return (0);
}
