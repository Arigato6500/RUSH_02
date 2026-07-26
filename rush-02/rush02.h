#ifndef RUSH02_H
#   define RUSH02_H

typedef struct s_dict
{
    char    *key;
    char    *value;
}   t_dict;

int	load_dict(char *filename, t_dict *dict);
int	ft_strlen(char *argv);
int	ft_str_is_numeric(char *str);
void	ft_putstr(char *str);
int	ft_strcmp(char *s1, char *s2);
int	ft_strlen(char *argv);

#endif