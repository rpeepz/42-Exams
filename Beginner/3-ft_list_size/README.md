# ft_list_size

Write a function that returns the number of elements in the linked list that's
passed to it.

It must be declared as follows:
``` c
int	ft_list_size(t_list *begin_list);
```
You must use the following structure, and turn it in as a file called
ft_list.h:
``` c
typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;
```