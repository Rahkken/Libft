/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasabri <yasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:25:12 by yasabri           #+#    #+#             */
/*   Updated: 2023/12/22 17:13:13 by yasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*ptr_dest;
	const char	*ptr_src;

	if (!dest && !src)
		return (NULL);
	i = 0;
	ptr_dest = (char *)dest;
	ptr_src = (const char *)src;
	if (ptr_src < ptr_dest)
	{
		while (n--)
			ptr_dest[n] = ptr_src[n];
		return (dest);
	}
	else
	{
		while (i < n)
		{
			ptr_dest[i] = ptr_src[i];
			i++;
		}
	}
	return (dest);
}
