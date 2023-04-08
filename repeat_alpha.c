#include <unistd.h>

void    ft_fonc(char **str)
{
    int i;
    int k;

    i = 0;
    while(str[1][i])
    {
        k = 1;
        if (str[1][i] > 64 && str[1][i] < 91)
            k = str[1][i] - 64;
        else if (str[1][i] > 96 && str[1][i] < 123)
            k = str[1][i] - 96;
        while (k > 0)
        {
            write (1, &str[1][i], 1);
            k--;
        }
    i++;
    }
}
int main(int ac, char **av)
{
    if (ac == 2)
        ft_fonc(av);
    write (1, "\n", 1);
    return (0);
}