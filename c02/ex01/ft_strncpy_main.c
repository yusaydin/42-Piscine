/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusaydin <yusaydin@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 23:58:03 by yusaydin          #+#    #+#             */
/*   Updated: 2023/09/10 23:59:32 by yusaydin         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int    i;

    i = 0;
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    
    while (i < n)
    {
        dest[i] = '\0'; // Eğer n karakteri sınırı aşılmadıysa, geriye kalanları null karakteri ile doldur
        i++;
    }
    return dest;
}

int main()
{
    char src[] = "yusuf";
    char dest[20] = ""; // Hedef diziyi null karakteri ile başlatın

    int n = 5;

    ft_strncpy(dest, src, n);
    int i = 0;
    while (n > i)
    {
        printf("%c", dest[i]);
        i++;
    }
    return 0;
}
