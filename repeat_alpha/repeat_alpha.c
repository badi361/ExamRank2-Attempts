#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int k;
    if (ac == 2)
    {
        while (av[1][i])
        {
            if (av[1][i] > 64 && av[1][i] < 91)
            {
                k = av[1][i] - 64;
                while (k > 0)
                {
                    write(1, &av[1][i], 1);
                    k--;
                }
            }
            else if (av[1][i] > 96 && av[1][i] < 123)
            {
                k = av[1][i] - 96;
                while (k > 0)
                {
                    write(1, &av[1][i], 1);
                    k--;
                }
            }
            else 
                write(1, &av[1][i], 1);
        i++;
        }
    }
    write(1, "\n", 1);
}