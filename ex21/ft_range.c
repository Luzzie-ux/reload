/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 12:54:03 by rodrpere          #+#    #+#             */
/*   Updated: 2026/04/14 15:27:14 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*arr;

	i = 0;
	size = max - min;
	arr = malloc(size * sizeof(int));
	if (min >= max)
		return (NULL);
	while (min + i != max)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}

/*#include <stdio.h>
int    main(void)
{
	int i = 0;
	int	min;
	int	max;
	
	printf("Enter a min number:");
	scanf("%d", &min);
	
	printf("Enter a max number:");
	scanf("%d", &max);
	
	int*    range = ft_range(min, max);
	int	size = max - min;
	
	if (!range)
		printf("Error\n");
		return (1);
	while (i < size)
	{
		printf("array[%d] = %d\n", i, range[i]);
		i++;
	}
	free(range);
	return (0);
}*/
