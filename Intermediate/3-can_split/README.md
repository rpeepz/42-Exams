# Can Split

```
This exam question requires an optimized solution
```  

Create a function that returns 1 if, by removing one edge of the tree it can be split into two trees with the same number of nodes (i.e with the same 'size'). 

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
int	can_split(struct s_node *n);
```

<br>

Example 1:
```
       28
       /
      51
     / \
    /   \
   26   48
  / \
 /   \
76   13
```
In this case, it should return 1 (remove the edge between 51 and 26 will split the tree in 2 trees with each a size of 3).


Example 2: 
```
    30
    / \
   /   \
  15   41
 /     /
61    80
```
In this case, it should return 0 (you can't split the tree and make 2 trees with the
same size).

 >- The largest test we wil run is about 250 000 nodes. It should run in less than 2 seconds.  

<br>

<br>

NOTES:  
