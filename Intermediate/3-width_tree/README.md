# Width Tree

```
This exam question requires an optimized solution
```  
Given the root node of a binary tree, create a function that returns the 'width' of the tree, which is the number of node present on the longest path between two leaves in the tree.

The binary tree uses the following node structure :
``` c
struct s_node 
{
	int value;
	struct s_node *left;
	struct s_node *right;
};
```
The function must be declared as follows:
``` c
int	width_tree(struct s_node *n);
```


<br>

Example 1:
``` c
        1
      /   \
    2      \
   / \       \
 3    4       5
     /       /  \
    6       7    8
```
In this case, your function should return 6, because the longest path between two leaves is 6->4->2->1->5->7 (or finish by 8), which contains 6 nodes, so the tree have a 'width' of 6.

Example 2:
``` c
         1
       /  \
     2     \
    / \     3
  4    \
 / \    \
5   6    7   
 \      / \
  8    9   10
      / \    \
     11   12  13
```
In this case, your function should return 7, because the longest path between two leaves is 8->5->4->2->7->9->11 .


 >- The values of each node does not matter.
 >- The bigger test we will do is about 250 000 nodes. It should run in less
than 2 seconds.
<br>

<br>

NOTES:  