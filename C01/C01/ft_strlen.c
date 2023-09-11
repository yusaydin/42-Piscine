#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

int main ()
{
    char *str = "Edirne";
    printf("%d",ft_strlen(str));
    return 0;
}
/*#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int main()
{
    char *str = "edirne";
    printf("%d", ft_strlen(str));
    return 0;
}*/