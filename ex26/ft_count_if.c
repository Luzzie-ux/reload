/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 11:49:03 by rodrpere          #+#    #+#             */
/*   Updated: 2026/04/15 14:13:17 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (tab[i] != NULL)
	{
		if (f(tab[i]) == 1)
		{
			j++;
		}
		i++;
	}
	return (j);
}
