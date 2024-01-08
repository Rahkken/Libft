/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasabri <yasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:56:05 by yasabri           #+#    #+#             */
/*   Updated: 2023/12/22 17:13:56 by yasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

static size_t	ft_size_tab(const char *s, char c)
{
	size_t	i;
	size_t	size;
	size_t	sep;

	i = 0;
	size = 0;
	sep = 0;
	while (s[i])
	{
		if (s[i] == c && sep == 1)
		{
			size++;
			sep = 0;
		}
		else if (s[i] != c)
			sep = 1;
		i++;
	}
	if (sep == 1)
		size++;
	return (size);
}

static char	**ft_fill_tab(char const *s, char c, char **tab)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		j = i;
		while (s[j] != c && s[j])
			j++;
		if (j != i)
		{
			tab[k] = ft_substr(s, i, j - i);
			k++;
		}
		i = j;
	}
	tab[k] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	size_t	size;
	char	**tab;

	if (!s)
		return (NULL);
	size = ft_size_tab(s, c);
	tab = malloc(sizeof(char *) * (size + 1));
	if (!tab)
		return (NULL);
	tab = ft_fill_tab(s, c, tab);
	return (tab);
}
