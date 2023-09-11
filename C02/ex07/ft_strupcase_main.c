/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusaydin <yusaydin@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 23:15:24 by yusaydin          #+#    #+#             */
/*   Updated: 2023/09/11 23:15:27 by yusaydin         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strupcase(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    i++;
    }
    return (str);
}

#include<stdio.h>
int main()
{
    char str [] = "asesdzity";
    printf(ft_strupcase(str));
}