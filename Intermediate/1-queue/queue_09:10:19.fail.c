#include <stdlib.h>
struct s_queue *init(void){

	struct s_queue	*new;
	if (!(new = malloc(sizeof(new))))
		return ((void *)0);
	new->first = (void *)0;
	new->last = (void *)0;
	return (new);
}
void enqueue(struct s_queue *queue, void *content){
	struct s_node	*new;
	struct s_queue	*queue2;

	queue2 = queue;
	if ((new = malloc(sizeof(new))))
	{
		if (!(new->content = malloc(sizeof(content))))
			new->content = (void *)0;
		new->content = content;
		new->next = (void *)0;
	}
	else
		new = (void *)0;
	if (!queue2->first)
		queue2->first = new;
	else
	{
		struct s_node *tmp = queue2->first;
		while (queue2->first)
			queue2->first = queue2->first->next;
		queue2->first = new;
		queue->first = tmp;
		queue2->first = queue->first;
	}
	queue2->last = new;
	queue = queue2;
}
void *dequeue(struct s_queue *queue){
	if (!queue || (queue && !queue->first))
		return ((void *)0);
	struct s_node	*tmp;

	tmp = queue->first;
	queue->first = queue->first->next;
	return (tmp->content);
}
void *peek(struct s_queue *queue){
	if (!queue || (queue && !queue->first))
		return ((void *)0);
	return (queue->first->content);
}
int isEmpty(struct s_queue *queue){
	return ((!queue || (queue && !queue->first)) ? 1 : 0);

//REMOVE----------------------------------------------------------//
int     main(void){

	struct s_queue *q = (void *)0;
	
	q = init();
	printf("queue - [%p]\n", q);
	printf("first [%13p] - last[%13p]\n", q->first, q->last);

	enqueue(q, "hello there!!");
	printf("last  [%13p] - last->c[%13s]\n", q->last->content, q->last->content);
	enqueue(q, "arrrrgh matey");
	printf("last  [%13p] - last->c[%13s]\n", q->last->content, q->last->content);
	enqueue(q, "leedle leedle");
	printf("last  [%13p] - last->c[%13s]\n", q->last->content, q->last->content);
	struct s_node	*tmp = q->first;
	while (tmp)
	{
		printf("%s\n", peek(q));
		tmp = tmp->next;
		
	}	
		
	
	
	// struct s_node	*test;
	// while ((test = dequeue(q))){
	// 	printf("[%p]\n", test);
	// 	// printf("l->c[%13p] - l->c[%13s]\n", test->content, test->content);
	// }
	return (0);
}
//REMOVE----------------------------------------------------------//}
