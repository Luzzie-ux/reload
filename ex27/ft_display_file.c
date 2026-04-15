/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 14:21:08 by rodrpere          #+#    #+#             */
/*   Updated: 2026/04/15 15:14:52 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
//only can use: close, open, read, write functions

/*
int open(const char *path, int flags);
Returns a file descriptor (positive int) on success
Returns -1 on failure
*/

/*
ssize_t read(int file_descriptor, void *buffer, size_t counter);
Returns the number of bytes read
Returns 0 when the file is finished (EOF)
Returns -1 on error
*/

/*
ssize_t write(int file_descriptor, const void *buffer, size_t counter);
Returns the number of bytes written
Returns -1 on error
fd 1 is stdout, fd 2 is stderr
*/

/*
int close(int file_descriptor);
Takes a file descriptor and closes it, freeing the resource
Returns 0 on success, -1 on error
*/
int	main(int argc, char **argv)
{
	int	file;
	int	buffer[64];
	int	bytes_read;
	
	if (argc == 1)
	{
		write(1, "File name missing.\n", 20);
		return (0);
		
	}
	else if (argc > 2)
	{
		write(1, "Too many arguments.\n", 21);
		return (0);
	}

	file = open(argv[1], O_RDONLY);
	if (file == -1)
	{
		write(1, "Cannot read file.\n", 19);
		return (0);
	}
	bytes_read = 64;
	while (bytes_read == 64)
	{
		bytes_read = read(file, buffer, 64);
		write(1, buffer, bytes_read);
	}
	
	close (file);
	return 0;
}