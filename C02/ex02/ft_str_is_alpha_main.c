/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusaydin <yusaydin@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 21:35:06 by yusaydin          #+#    #+#             */
/*   Updated: 2023/09/11 21:35:09 by yusaydin         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			if (str[i] <= 'Z' && str[i] >= 'A')
			{
				i++;
			}
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
#include <stdio.h>
int main ()
{
    char str [] ="jgdfgd4h";
    printf("%d", ft_str_is_alpha(str));    
}