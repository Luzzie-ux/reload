/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:06:49 by rodrpere          #+#    #+#             */
/*   Updated: 2026/04/13 20:50:11 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>
int	main(void)
{
	int	a = 42;
	int	b = 6;
	int	div;
	int	mod;

	printf("Before div: %d divided %d\n", a, b);
	ft_div_mod(a, b, &div, &mod);
	printf("After div: div = %d, and mod is %d\n", div, mod);
}*/
