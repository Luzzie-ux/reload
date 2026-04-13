/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 15:44:24 by rodrpere          #+#    #+#             */
/*   Updated: 2026/04/13 16:05:18 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*#include <stdio.h>
int	main(void)
{
	int a = 5;
	int b = 10;
	printf("Before: a = %d, b = %d\n", a, b);

	ft_swap(&a, &b);
	printf("After: a = %d, b = %d\n", a, b);

	return (0);
}*/
