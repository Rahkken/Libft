/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasabri <yasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:02:58 by yasabri           #+#    #+#             */
/*   Updated: 2023/12/22 17:13:18 by yasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*ptr_s;

	i = 0;
	ptr_s = (char *)s;
	while (i < n)
	{
		ptr_s[i] = c;
		i++;
	}
	return (s);
}
