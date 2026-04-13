/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 20:32:42 by rodrpere          #+#    #+#             */
/*   Updated: 2026/04/13 20:33:00 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb <= -1)
	{
		return (0);
	}
	while (nb >= 1)
	{
		fact = (nb * fact);
		nb--;
	}
	return (fact);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d\n",ft_iterative_factorial(5));
	printf("%d\n",ft_iterative_factorial(0));
	printf("%d\n",ft_iterative_factorial(-48494));
	printf("%d\n",ft_iterative_factorial(-1));
	printf("%d\n",ft_iterative_factorial(2));
}*/
