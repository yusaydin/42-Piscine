/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric_main.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusaydin <yusaydin@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:29:43 by yusaydin          #+#    #+#             */
/*   Updated: 2023/09/11 22:29:46 by yusaydin         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_numeric(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] <= '9' && str[i] >= '0'))
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
#include <stdio.h>
int main ()
{
    char str [] ="5645s64";
    printf("%d", ft_str_is_numeric(str));    
}