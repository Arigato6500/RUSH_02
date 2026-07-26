#include "rush02.h"

char	*find_value(char *key, t_dict *dict, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (ft_strcmp(key, dict[i].key) == 0)
			return (dict[i].value);
		i++;
	}
	return (NULL);
}