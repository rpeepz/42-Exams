# ft_list_remove_if

Write a function called ft_list_remove_if that removes from the
passed list any element the data of which is "equal" to the reference data.

It will be declared as follows :
``` c
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());
```
>cmp takes two void* and returns 0 when both parameters are equal.

You have to use the ft_list.h file, which will contain:
```c
typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;
```