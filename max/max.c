int		max(int* tab, unsigned int len)
{
    int i = 0;
    int result;

    result = tab[i];
    while (i < len)
    {
        if (result < tab[i])
            result = tab[i];
        i++;
    }
    return (result);
}