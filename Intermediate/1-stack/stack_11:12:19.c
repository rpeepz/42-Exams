#include <stdlib.h>

struct s_node {
	void          *content;
	struct s_node *next;
};

struct s_stack {
	struct s_node *top;
};

struct s_stack *init(void) {
	struct s_stack *s;
	if (!(s = malloc(sizeof(s))))
		return (0x0);
	s->top = NULL;
	return (s);
}

int isEmpty(struct s_stack *stack) {
	return (stack && stack->top ? 0 : 1);
}

void *pop(struct s_stack *stack) {
	if (isEmpty(stack))
		return (NULL);
	struct s_node *pop = stack->top;
	stack->top = stack->top->next;
	return (pop->content);
}

void push(struct s_stack *stack, void *content) {
	if (!stack)
		return ;
	struct s_node *n;
	if (!(n = malloc(sizeof(n))))
		return ;
	n->content = content;
	n->next = NULL;
	if (isEmpty(stack))
		stack->top = n;
	else {
		n->next = stack->top;
		stack->top = n;
	}
}

void *peek(struct s_stack *stack) {
	if (isEmpty(stack))
		return (NULL);
	return (stack->top->content);
}

