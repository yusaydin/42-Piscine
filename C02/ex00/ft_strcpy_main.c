/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusaydin <yusaydin@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 21:14:47 by yusaydin          #+#    #+#             */
/*   Updated: 2023/09/11 21:14:51 by yusaydin         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int main()
{
    char src[] = "edirne";
    char dest [] = "";

    printf("%s", ft_strcpy(dest, src));
    return 0;
}

