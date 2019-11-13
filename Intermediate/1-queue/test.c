#include <stdio.h>
#define GRN		"\033[32m"
#define RED		"\033[31m"
#define NOCOL	"\033[0m"
struct s_queue		*init(void);
void				enqueue(struct s_queue *queue, void *content);
void				*dequeue(struct s_queue *queue);
void				*peek(struct s_queue *queue);
int					isEmpty(struct s_queue *queue);

int		main(int ac, char **av)
{
	struct s_queue *q = init();
	printf("is empty? [%s%c%s]\n", isEmpty(q) ? RED:GRN, isEmpty(q) ? 'Y':'N', NOCOL);
	printf("queue init [%s%p%s]\n", q ? GRN:RED, q, NOCOL);
	printf("Peek test ->[%s%s%s]\n", peek(q) ? GRN:RED, peek(q), NOCOL);
	if (ac > 1) {
		for (int s = 1; s < ac; s++) {
			enqueue(q, av[s]);
			printf("enqueued %s\n", av[s]);
		}
	}
	printf("is empty? [%s%c%s]\n", isEmpty(q) ? RED:GRN, isEmpty(q) ? 'Y':'N', NOCOL);
	printf("queued [%d] item%s\n", ac - 1, (ac ==  2) ? "!":"s!");
	for (int s = 0; s < ac - 1; s++) {
		printf("dequeued '%s'\n", dequeue(q));
		printf("Peek test ->[%s%s%s]\n", peek(q) ? GRN:RED, peek(q), NOCOL);
		printf("is empty? [%s%c%s]\n", isEmpty(q) ? RED:GRN, isEmpty(q) ? 'Y':'N', NOCOL);
	}
	return (0);
}
