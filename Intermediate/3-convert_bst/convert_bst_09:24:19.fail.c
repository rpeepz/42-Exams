struct s_node
{
		int           value;
		struct s_node *right;
		struct s_node *left;
};

struct s_node *convert_bst(struct s_node *bst)
{
	struct s_node *left;
	struct s_node *right;
	struct s_node *cur;
	struct s_node *end;

	cur = bst;
	while (cur)
	{
		right = cur->right;
		left = cur->left;
		if (!right)
			end
		if (right->right)
			cur = right;

	}
}
