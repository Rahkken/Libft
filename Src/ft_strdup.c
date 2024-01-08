/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasabri <yasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:10:41 by yasabri           #+#    #+#             */
/*   Updated: 2023/12/22 17:15:16 by yasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	len_s;
	char	*dup_s;

	i = 0;
	len_s = ft_strlen(s);
	dup_s = malloc(len_s + 1);
	if (!dup_s)
		return (NULL);
	while (i < len_s)
	{
		dup_s[i] = s[i];
		i++;
	}
	dup_s[i] = '\0';
	return (dup_s);
}
