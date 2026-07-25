/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 12:58:51 by ssoriano          #+#    #+#             */
/*   Updated: 2026/07/25 17:32:27 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>  
#include <unistd.h>

int	ft_posible_errors(int argc, char *argv[], o_file)
{
	int		o;

	o = 0;
	if (argc < 2 || argc > 3)
	{
		write(2, "DError\n", 8);
		return (0);
	}
	
	while (argv[1][o])
	{
		if (argv[1][o] < '0' || argv[1][o] > '9')
		{
			write(2, "WError\n", 8);
			return (0);
		}
		o++;
	}
	if (o_file == -1)
	{
		write(2, "RError\n", 8);
		return (0);
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	int	o_file;
	int count;
	off_t size;
	
	o_file = open("numbers.dict", O_RDONLY);
	count = 0;
	if (!(ft_posible_errors(argc, argv, o_file)))
		return (0);
	size = lseek(o_file, 0, SEEK_END);
	printf("%ld", size);
	close(o_file);
	return (0);
}