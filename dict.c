#include <fcntl.h>
#include <unistd.h>
#include "rush02.h"

int parse_line(char *buffer, int i, t_dict *entry)
{
    //1. Leer la clave
    int start;

    start = i;
    while(buffer[i] >= '0' && buffer [i] <= '9')
        i++;
    //2. Saltar espacios
    //3. Comprobar ':'
    //4. Saltar espacios
    //5. Leer el valor
    //6. Avanzar hasta '\n'
    //7. Devolver la nueva posición
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
    parse_dict(buffer, dict);
    return (1);
}