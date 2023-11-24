/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_tests.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 12:00:07 by mbernard          #+#    #+#             */
/*   Updated: 2023/11/24 12:23:35 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "/home/mbernard/Documents/My_Git/get_next_line/get_next_line.c"
//#include "/home/mbernard/Documents/My_Git/get_next_line/get_next_line_utils.c"
#include <unistd.h>
#include <fcntl.h>

int	main(int ac, char **av)
{
	int	file;
	char	buf[127];
	int	size;
	if (ac > 1)
	{
		file = open(av[1], O_RDONLY);
		size = read(file, buf, 127);
		//get_next_line(file);
		write(1, buf, size);
		close(file);
	}
	return (0);
}
