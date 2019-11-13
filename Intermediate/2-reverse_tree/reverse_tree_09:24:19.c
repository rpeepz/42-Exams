struct s_node {
		int           value;
		struct s_node *right;
		struct s_node *left;
	};
void reverse_tree(struct s_node *root)
{
	if (!root)
		return ;
	struct s_node *tmp;
	tmp = root->right;
	root->right = root->left;
	root->left = tmp;
	reverse_tree(root->right);
	reverse_tree(root->left);
}
