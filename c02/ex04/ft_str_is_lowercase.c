/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusaydin <yusaydin@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:42:48 by yusaydin          #+#    #+#             */
/*   Updated: 2023/09/11 22:42:52 by yusaydin         ###   ########.tr       */
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