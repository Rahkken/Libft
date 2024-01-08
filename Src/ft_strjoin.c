/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasabri <yasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:10:51 by yasabri           #+#    #+#             */
/*   Updated: 2023/12/22 17:15:27 by yasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	total;
	char	*join_s;

	total = ft_strlen(s1) + ft_strlen(s2);
	join_s = malloc(total + 1);
	if (!join_s)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[j])
		join_s[i++] = s1[j++];
	j = 0;
	while (s2[j])
		join_s[i++] = s2[j++];
	join_s[i] = '\0';
	return (join_s);
}
