/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoriano <ssoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 16:18:03 by ssoriano          #+#    #+#             */
/*   Updated: 2026/07/26 16:21:24 by ssoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int		i;
	int		m;

	i = 0;
	m = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
		i++;
	m += s1[i] - s2[i];
	return (m);	
}

int	ft_strlen(char *argv)
{
	int	len;

	len = 0;
	while (argv[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	ft_str_is_numeric(char *str)
{
	int		o;

	o = 0;
	while (str[o])
	{
		if (str[o] < '0' || str[o] > '9')
			return (0);
		o++;
	}
	return (1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}