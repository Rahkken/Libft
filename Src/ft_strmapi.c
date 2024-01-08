/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasabri <yasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:25:15 by yasabri           #+#    #+#             */
/*   Updated: 2023/12/22 17:15:51 by yasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*ptr_s;

	ptr_s = malloc(ft_strlen(s) + 1);
	if (!ptr_s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr_s[i] = f(i, s[i]);
		i++;
	}
	ptr_s[i] = '\0';
	return (ptr_s);
}
