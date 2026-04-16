/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 20:32:42 by rodrpere          #+#    #+#             */
/*   Updated: 2026/04/16 10:55:13 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb <= -1 || nb > 12)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*#include <stdio.h>
int	main(void)
{
	int n = 0;
	int fact = 1;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	fact = ft_recursive_factorial(n);

	printf("factorial:%d\n", fact);

	return (0);
}*/
