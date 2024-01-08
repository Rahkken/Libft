/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasabri <yasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:45:37 by yasabri           #+#    #+#             */
/*   Updated: 2023/12/22 17:12:57 by yasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*ptr_s;

	ptr_s = (const char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr_s[i] == (char)c)
			return ((void *)ptr_s + i);
		i++;
	}
	return (NULL);
}
