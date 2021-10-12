#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr;
	t_list	*next;

	curr = *lst;
	*lst = NULL;
	if (curr)
	{
		next = curr->next;
		while (next)
		{
			next = curr->next;
			del(curr->content);
			free(curr);
			curr = next;
		}
	}
}