/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable_main.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusaydin <yusaydin@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 23:08:53 by yusaydin          #+#    #+#             */
/*   Updated: 2023/09/11 23:08:57 by yusaydin         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_printable(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 32 && str[i] <= 126)
        {
            i++;
        }
        else
        {
            return(0);
        }
    }
    return (1);
}

#include<stdio.h>
int main ()
{
    char str [] = "ASDsF^+-* /+";
    printf("%d", ft_str_is_printable(str)); 
}
