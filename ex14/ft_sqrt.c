/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 20:30:34 by rodrpere          #+#    #+#             */
/*   Updated: 2026/04/15 21:09:18 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	start;
	int	end;
	int	mid;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	start = 1;
	end = 46341;
	while (start <= end)
	{
		mid = start + (end - start) / 2;
		if (mid * mid == nb)
			return (mid);
		else if (mid * mid < nb)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
	int nb;

	printf("Select a Real Number: ");
	scanf("%d", &nb);
	int result = ft_sqrt(nb);

	if (result < 0)
		printf("Error: Number %d is Irrational", nb);
	else 
		printf("Square root of %d is: %d", nb, result);	
}*/