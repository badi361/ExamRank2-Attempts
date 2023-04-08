#include <unistd.h>

void    ft_fonc(char **str)
{
    int i;
    int k;
    char c;
    k = 1;
    while (str[k])
    {
        i = 0;
        while (!((str[k][i] > 64 && str[k][i] < 91) || (str[k][i] > 96 && str[k][i] < 123)))
        {
            write(1, &str[k][i], 1);
            i++;
        }
        while (str[k][i])
        {
            if (str[k][i + 1] == ' ' || str[k][i + 1] == '\0' || str[k][i + 1] == '\t')
            {
                if (str[k][i] > 96 && str[k][i] < 123)
                {
                    c = str[k][i] - 32;
                    write(1, &c, 1);
                }
                else
                    write(1, &str[k][i], 1);
            }
            else
            {
                if (str[k][i] > 64 && str[k][i] < 91)
                {
                    c = str[k][i] + 32;
                    write(1, &c, 1);
                }
                else
                    write(1, &str[k][i], 1);
            }
            i++;
        }
    write(1, "\n", 1);
    k++;
    }
}

int main (int ac, char **av)
{
    if (ac > 1)
        ft_fonc(av);
    else
        write (1, "\n", 1);
    return (0);
}