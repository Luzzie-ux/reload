/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 15:20:01 by rodrpere          #+#    #+#             */
/*   Updated: 2026/04/13 15:27:40 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	counter;

	counter = 'a';
	while (counter <= 'z')
	{
		ft_putchar(counter);
		counter++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
}*/
