#include <unistd.h>

int main(int ac,char **av)
{
    int i = 0;
    int start;
    int end;
    int flag = 0;
    if (ac < 2)
        write(1, "\n", 1);
    else
    {
        while (av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        while (av[1][i])
        {
            if (av[1][i] != ' ' && av[1][i] != '\t' && flag == 0)
            {
                start = i;
                while (av[1][i] != ' ' && av[1][i] != '\t' && av[1][i])
                    i++;
                end = i - 1;
                flag = 1;
                while (av[1][i] == ' ' || av[1][i] == '\t')
                    i++;
                if (av[1][i] == '\0')
                {
                    while (start <= end)
                   {
                        write(1, &av[1][start], 1);
                        start++;
                    }
                        write(1, "\n", 1);
                        return (0);
                }
            }
            if (av[1][i] == ' ' || av[1][i] == '\t')
            {
                write(1, " ", 1);
                while (av[1][i] == ' ' || av[1][i] == '\t')
                    i++;
            }
            write(1, &av[1][i], 1);
            i++;
        }
        write(1, " ", 1);
        while (start <= end)
        {
            write(1, &av[1][start], 1);
            start++;
        }
        write(1, "\n", 1);
    }
}