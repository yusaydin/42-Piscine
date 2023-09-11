/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase_main.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusaydin <yusaydin@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:54:33 by yusaydin          #+#    #+#             */
/*   Updated: 2023/09/11 22:54:36 by yusaydin         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */


int ft_str_is_uppercase(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
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
    char str [] = "ASDsF";
    printf("%d", ft_str_is_uppercase(str)); 
}