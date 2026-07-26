#ifndef RUSH02_H
#   define RUSH02_H

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_dict
{
    char    *key;
    char    *value;
}   t_dict;

int load_dict(char *filename, t_dict *dict);

#endif
