/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 14:21:08 by rodrpere          #+#    #+#             */
/*   Updated: 2026/04/15 21:08:52 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	ft_display_file(char **argv)
{
	int		file;
	int		bread;
	char	buffer[64];

	file = open(argv[1], O_RDONLY);
	if (file == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (0);
	}
	bread = 64;
	while (bread == 64)
	{
		bread = read(file, buffer, 64);
		if (bread > 0)
			write(1, buffer, bread);
		else if (bread == -1)
		{
			write(2, "Cannot read file.\n", 18);
			return (0);
		}
	}
	close(file);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (0);
	}
	else
		ft_display_file(argv);
	return (0);
}
