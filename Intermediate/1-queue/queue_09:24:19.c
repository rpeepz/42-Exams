#include <stdlib.h>

struct s_node
{
		void *content;
		struct s_node *next;
};

struct s_queue
{
		struct s_node *first;
		struct s_node *last;
};

struct s_queue *init(void)
{
	struct s_queue *q = malloc(sizeof(struct s_queue));
	q->first = NULL;
	q->last = NULL;
	return (q);
}

void enqueue(struct s_queue *queue, void *content)
{
	struct s_node *n = malloc(sizeof(struct s_node));
	n->content = content;
	n->next = NULL;
	if (!queue->first)
		queue->first = n;
	if (!queue->last)
	   queue->last = n;
	else
	{
		queue->last->next = n;
		queue->last = queue->last->next;
	}
	

}

int	isEmpty(struct s_queue *queue)
{
	return (queue && queue->first) ? 0 : 1;
}

void *dequeue(struct s_queue *queue)
{
	struct s_node *tmp;
	if (isEmpty(queue))
		return (NULL);
	tmp = queue->first->content;
	queue->first = queue->first->next;
	return tmp;
}

void *peek(struct s_queue *queue)
{
	if (isEmpty(queue))
		return (NULL);
	return (queue->first->content);
}
