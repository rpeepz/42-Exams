struct s_node {
	int value;
	struct s_node *left;
	struct s_node *right;
};

int		follow_path(struct s_node *node, int len, int record)
{
	if (len > record)
        record = len;
	if (!node)
	    return (record);
	struct s_node *right;
	struct s_node *left;
	right = node->right;
	left = node->left;
	if (left)
	{
		if (node->value < left->value)
			len = len + 1;
		else
			len = 1;
		record = follow_path(left, len, record);
	}
	if (right)
    {
		if (node->value < right->value)
			len = len + 1;
		else
			len = 1;
		record = follow_path(right, len, record);
    }
	return (record);
}

int		longest_sequence(struct s_node *node)
{
	if (!node)
		return 0;
	return (follow_path(node, 1, 1));
}
