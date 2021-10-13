/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 18:36:07 by ncarob            #+#    #+#             */
/*   Updated: 2021/10/13 19:45:02 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t n)
{
	size_t	i;
	size_t	j;

	if (!big || big[0] == 0)
		return (NULL);
	if (!small || small[0] == 0)
		return ((char *)big);
	i = -1;
	while (++i < n && big[i])
	{
		j = 0;
		if (big[i] == small[j])
		{
			while (big[i + j] == small[j] && i + j < n && big[i + j])
				j++;
		}
		if (ft_strlen(small) == j)
			return ((char *)(&big[i]));
	}
	return (0);
}
