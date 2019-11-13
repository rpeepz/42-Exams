# Longest Sequence

Create a function that return the length of the longest path which comprises of nodes with consecutive values in increasing order.
Every node is considered as a path of length 1.

The function must be declared as follows:
``` c
int	longest_sequence(struct s_node *node);
```

<br>

Example 1:  
``` c

       10
       /
      5
     / \
    /   \
   6    9
  / \
 /   \
7   13
```
In this case, it should return 3  
(because the longest consecutive sequence is: 5 -> 6 -> 7).

<br>

Example 2:
``` c
   5
  / \
 /   \
6     4
    /  \
   9    3
 /  \    \
3    2    2
```  
In this case, your function return 2  
(because the longest consecutive sequence is: 5 -> 6 ).



<br>

<br>

NOTES:  
