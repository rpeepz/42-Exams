# Queue

Implement a queue data structure in C, using the following structures in your
code:
``` c
	struct s_node {
		void *content;
		struct s_node *next;
	};

	struct s_queue {
		struct s_node *first;
		struct s_node *last;
	};
```

> Implement 5 functions for the following queue operations:

These functions must be declared as follows:

``` c
	struct s_queue *init(void);

	void enqueue(struct s_queue *queue, void *content);

	void *dequeue(struct s_queue *queue);

	void *peek(struct s_queue *queue);

	int isEmpty(struct s_queue *queue);
```


<br>

<br>

NOTES:  
