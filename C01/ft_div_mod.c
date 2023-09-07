#include<unistd.h>
#include<stdio.h>

void ft_div_mod (int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int main ()
{
    int a, b;
    int *div, *mod;
    a = 15;
    b = 6;
    div = &a;
    mod = &b;
    ft_div_mod(a, b, div, mod);
    printf("div%d mod%d", *div, *mod);
}