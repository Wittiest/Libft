/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpearson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 16:14:10 by dpearson          #+#    #+#             */
/*   Updated: 2017/09/20 16:14:11 by dpearson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	hold;
	char	*haystack;
	char	*needle;

	i = 0;
	haystack = (char *)big;
	needle = (char *)little;
	if (needle[0] == '\0')
		return (haystack);
	while (i < len && haystack[i])
	{
		j = 0;
		hold = i;
		while (hold < len && haystack[hold++] == needle[j++])
		{
			if (needle[j] == '\0')
				return (&haystack[i]);
		}
		i++;
	}
	return (NULL);
}