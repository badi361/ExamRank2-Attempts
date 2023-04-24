#include <unistd.h>
#include <stdio.h>
int     ft_atoi(char *str)
{
    int i = 0;
    int result = 0;
    int sign = 1;

    while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result * sign);
}
void    ft_putchar(char c)
{
    write(1, &c, 1);
}
void    ft_putnbr(int nbr)
{
    if (nbr < 0)
    {
        ft_putchar('-');
        nbr = nbr * -1;
    }
    if (nbr > 9)
        ft_putnbr(nbr / 10);
    ft_putchar(nbr % 10 + '0');
}
int main(int ac, char **av)
{
    int i = 1;
    if(ac == 2)
    {
        int nbr = ft_atoi(av[1]);
        while (i <= 9)
        {
            ft_putnbr(i);
            write(1, " x ", 3);
            ft_putnbr(nbr);
            write(1, " = ", 3);
            ft_putnbr(i * nbr);
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
}