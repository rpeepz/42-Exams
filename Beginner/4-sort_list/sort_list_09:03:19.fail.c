#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int)){
	t_list *tmp;
	t_list *swap;
	int		sort = 1;

	tmp = lst;
	if (lst == 0 || lst->next == 0)
		return (lst);
	while(tmp && sort){
		while (tmp && tmp->next){
			if (*cmp(tmp->data, tmp->next->data)){
				while (*cmp(tmp->data, tmp->next->data)) {
					tmp = tmp->next;
				}

			}
			else {
				swap = tmp;
				tmp = tmp->next;
				tmp->next = swap;
			}
		}

	}
	return (lst);
}
