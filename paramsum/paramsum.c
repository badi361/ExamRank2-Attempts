#include <unistd.h>

void    ft_putnbr(int c)
{
    char digit;
    if (c >= 10)
        ft_putnbr(c / 10);
    digit = (c % 10) + '0';
    write(1, &digit, 1);
}
int main(int ac, char **av)
{
    ft_putnbr(ac - 1);
    write(1, "\n", 1);
}