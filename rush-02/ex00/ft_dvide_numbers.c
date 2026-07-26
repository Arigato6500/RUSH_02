/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dvide_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 17:36:54 by ssoriano          #+#    #+#             */
/*   Updated: 2026/07/26 17:41:30 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "rush02.h"

void ft_divide_numbers(char *argv[], int lenght)
{
	
	int incomplet_third;
	int tercio;
	int i;
	int undecillion[lenght];

	i = 1:
	undecillion[0] = 1;
	third = lenght / 3;
	incomplet_third = lenght % 3;
	//Para la key de value
	while (i++ < lenght)
		undecillion[i] = '0';
	
	if (incomplet_third)
	{
		search_dict(argv[1], lenght);
		ft_divide_numbers(argv, lenght - incomplet_third);
	}
	else if (third)
	{
		search_dict(argv[1], lenght);
		ft_divide_numbers(argv, lenght - third);
	}
	return ;
}
