/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 18:34:55 by ncarob            #+#    #+#             */
/*   Updated: 2021/10/13 18:49:13 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr;
	t_list	*next;

	curr = *lst;
	*lst = NULL;
	if (!del)
		return ;
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
