/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 20:54:10 by rodrpere          #+#    #+#             */
/*   Updated: 2026/04/13 20:58:51 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	ft_putchar(str);
}

/*int main(void)
{
	ft_putstr("Hello World\n");
	ft_putstr("BEE\n");
	ft_putstr("1");
}*/