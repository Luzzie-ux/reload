/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 15:33:03 by rodrpere          #+#    #+#             */
/*   Updated: 2026/04/15 19:37:38 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
