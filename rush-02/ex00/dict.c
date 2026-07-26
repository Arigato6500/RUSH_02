#include "rush02.h"

char	*copy_str(char *buffer, int start, int end)
{
	char    *dest;
	int i;

	dest = malloc((end - start) + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (start < end)
	{
		dest[i++] = buffer[start++];
	}
	dest[i] = '\0';
	return (dest);
}

int	skip_spaces(char *buffer, int i)
{
	while (buffer[i] == ' ')
		i++;
	return (i);
}

int	parse_line(char *buffer, int i, t_dict *entry)
{
	int	start;

	start = i;
	while (buffer[i] >= '0' && buffer[i] <= '9')
		i++;
	entry->key = copy_str(buffer, start, i);
	if (entry->key == NULL)
		return (-1);
	i = skip_spaces(buffer, i);
	if (buffer[i] != ':')
		return (-1);
	i++;
	i = skip_spaces(buffer, i);
	start = i;
	while (buffer[i] != '\n' && buffer[i] != '\0')
		i++;
	entry->value = copy_str(buffer, start, i);
	if (entry->value == NULL)
		return (-1);
	if (buffer[i] == '\n')
		i++;
	return (i);
}

int parse_dict(char *buffer, t_dict *dict)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (buffer[i] != '\0')
    {
        i = parse_line(buffer, i, &dict[j]);
        if (i == -1)
            return (0);
        j++;
    }
    return (j);
}

int load_dict(char *filename, t_dict *dict)
{
    int fd;
    char    buffer[10000];
    int bytes;

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    bytes = read(fd, buffer, 9999);
    if (bytes == -1)
    {
        close (fd);
        return (0);
    }
    
    buffer[bytes] = '\0';
    close(fd);
    if (parse_dict(buffer, dict) == 0)
        return (0);
    return (1);
}