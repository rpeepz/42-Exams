#include <stdlib.h>
struct s_node {
	void			*content;
	struct s_node	*next;
};

struct s_queue {
	struct s_node	*first;
	struct s_node	*last;
};

struct s_queue		*init(void)
{
	struct s_queue *q = malloc(sizeof(struct s_queue));
	q->first = NULL;
	q->last = NULL;
	return (q);
}

void				enqueue(struct s_queue *queue, void *content)
{
	if (!queue) {
		return ;
	}
	struct s_node *node = malloc(sizeof(struct s_node));
	node->content = content;
	node->next = NULL;
	if (!(queue->first)) {
		queue->first = node;
		queue->last = queue->first;
	} else {
		queue->last->next = node;
		queue->last = queue->last->next;
	}
}
int                 isEmpty(struct s_queue *queue)
{

    return (!(queue->first) ? 1 : 0);
}
void				*dequeue(struct s_queue *queue)
{
	if (isEmpty(queue))
		return (NULL);
	struct s_node *tmp = queue->first;
	queue->first = queue->first->next;
	return (tmp->content);
}

void				*peek(struct s_queue *queue)
{
	return (queue->first ? queue->first->content: queue->first);
}
