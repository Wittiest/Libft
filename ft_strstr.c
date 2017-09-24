/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpearson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 16:13:14 by dpearson          #+#    #+#             */
/*   Updated: 2017/09/20 16:13:15 by dpearson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *big, const char *little)
{
	size_t	i;
	size_t	j;
	size_t	hold;
	char	*haystack;
	char	*needle;

	i = 0;
	haystack = (char *)big;
	needle = (char *)little;
	if (!*needle)
		return (haystack);
	while (*(haystack + i))
	{
		j = 0;
		hold = i;
		while (haystack[hold++] == needle[j++])
			if (!*(needle + j))
				return (&haystack[i]);
		i++;
	}
	return (NULL);
}
