/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 10:34:34 by rodrpere          #+#    #+#             */
/*   Updated: 2026/04/14 12:49:48 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	char	*p;
	long	len;

	len = 0;
	while (src[len])
		len++;
	str = malloc(len + 1);
	p = str;
	while (*src)
		*p++ = *src++;
	*p = '\0';
	return (str);
}

/*#include <stdio.h>
int	main(void)
{
	char src[] = "this is a pretty long string to be honest";
	printf("Src: %s\n", src);
	char *dst =  ft_strdup(src);
	printf("Dst After strdup: %s\n", dst);
	return (0);
}*/