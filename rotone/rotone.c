#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    char k;
    if (ac == 2)
    {
        while (av[1][i])
        {
            if ((av[1][i] > 64 && av[1][i] < 90) || (av[1][i] > 96 && av[1][i] < 122))
                k = av[1][i] + 1;
            else if (av[1][i] == 90 || av[1][i] == 122)
                k = av[1][i] - 25;
            else 
                k = av[1][i];
            write(1, &k, 1);
            i++;
        }
    }
    write(1, "\n", 1);
}