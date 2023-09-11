/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase_main.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusaydin <yusaydin@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:43:14 by yusaydin          #+#    #+#             */
/*   Updated: 2023/09/11 22:43:18 by yusaydin         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_lowercase(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] <= 'z' && str[i] >= 'a')
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
    char str[] = "";
    printf("%d", ft_str_is_lowercase(str));
}