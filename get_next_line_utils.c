/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 07:37:31 by ofedota           #+#    #+#             */
/*   Updated: 2026/01/08 17:18:29 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// count of elements in string 
size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(char *str, int asci_char)
{
	if (!str)
		return (NULL);
	while (*str)
	{
		if (*str == (char)asci_char)
			return ((char *)(str));
		str++;
	}
	if ((char)asci_char == '\0')
		return ((char *)str);
	return (NULL);
}

char	*ft_strjoin(char *stash, char *buffer)
{
	size_t	i;
	size_t	j;
	char	*str_p;
	size_t	len_stash;
	size_t	len_buffer;

	if (!buffer)
		return (NULL);
	len_stash = ft_strlen(stash);
	len_buffer = ft_strlen(buffer);
	str_p = malloc(sizeof(char) * (len_stash + len_buffer + 1));
	if (!str_p)
		return (NULL);
	i = 0;
	j = 0;
	while (i < len_stash)
	{
		str_p[i] = stash[i];
		i++;
	}
	while (j < len_buffer)
		str_p[i++] = buffer[j++];
	str_p[i] = '\0';
	return (str_p);
}
