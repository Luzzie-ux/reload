/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 15:33:03 by rodrpere          #+#    #+#             */
/*   Updated: 2026/04/13 15:35:30 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h> 

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	char	num;

	if (n >= 0)
	{
		num = 'P';
		ft_putchar(num);
	}
	else
	{
		num = 'N';
		ft_putchar(num);
	}
}
/*
int	main(void)
{
	ft_is_negative(42);
}*/
