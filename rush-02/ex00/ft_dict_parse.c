/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_parse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 16:25:00 by ssoriano          #+#    #+#             */
/*   Updated: 2026/07/26 17:22:55 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "rush02.h"

char	ft_check_dic(char	*argv[1])
{
	if (strcmp(*argv[1]))
	{
		//open the file and write the words with remove spaces
		
	}
}

char    ft_remove_spaces(char	*argv[1])
{
    int	i;
	int	j;

	i = 0;
	j = 0;
    while (argv[i])
    {
        if (ft_str_is_numeric(argv[i]))
        {
            argv[j] = argv[i];
			j++;
			
			if (argv[i + 1] == '9' ||  argv[i + 1] == ' ')
			{
				argv[j + 1] = ' ';
			}
        }
		i++;
    }
	argv[j] = argv[i];
	j = 0;
	while(argv[j])
	{
		write(1, &argv[i], 1);
		j++;
	}
	return (*argv);
}