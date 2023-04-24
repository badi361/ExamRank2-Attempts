#include <stdlib.h>

char    **ft_split(char *str)
{
    int i = 0;
    int k = 0;
    int wc = 0;
    int j = 0;
    int l;
    char **av;
    while (str[i])
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\r'))
            i++;
        if (str[i])
            wc++;
        while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\r'))
            i++;
    }
    i = 0;
    av = (char **)malloc(sizeof(char *) * (wc + 1));
    while (str[i])
    {
        while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\r'))
            i++;
        k = i;
        while ((str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\r')))
            i++;
        if (str[k])
        {
            l = 0;
            av[j] = (char *)malloc(sizeof(char) * i - k);
            while (k < i)
            {
                av[j][l] = str[k];
                k++;
                l++;
            }
        j++;
        }
    }
    av[j] = NULL;
    return (av);
}