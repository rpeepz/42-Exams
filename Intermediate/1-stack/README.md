# Stack

> Implement a stack data structure in C, using the following structures in your
code:
``` c
	struct s_node {
		void          *content;
		struct s_node *next;
	};

	struct s_stack {
		struct s_node *top;
	};
```

> Implement 5 functions for the following stack operations:

These functions must be declared as follows:

``` c
	struct s_stack *init(void);

	void *pop(struct s_stack *stack);

	void push(struct s_stack *stack, void *content);

	void *peek(struct s_stack *stack);

	int isEmpty(struct s_stack *stack);
```


<br>

<br>

NOTES:  