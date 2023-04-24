#include <unistd.h>

void    str_capitalizer(char *str)
{
    int i = 0;
    if (str[i] > 96 && str[i] < 123)
        str[i] -= 32;
    write(1, &str[i], 1);
    i++;
    while(str[i])
    {
        if ((str[i] > 96 && str[i] < 123) && (str[i - 1] == ' ' || str[i - 1] == '\t'))
            str[i] -= 32;
        if ((str[i] > 64 && str[i] < 91) && (str[i - 1] != ' ' && str[i - 1] != '\t'))
            str[i] += 32;
        write(1, &str[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    int k = 1;
    if (ac > 1)
    {
        while(av[k])
        {
            str_capitalizer(av[k]);
            write(1, "\n", 1);
            k++;
        }
    }
    else
        write(1, "\n", 1);
}