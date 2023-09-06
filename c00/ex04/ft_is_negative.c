/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusaydin <yusaydin@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:39:52 by yusaydin          #+#    #+#             */
/*   Updated: 2023/09/04 17:34:33 by yusaydin         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	poz;
	char	neg;

	poz = 'P';
	neg = 'N';
	if (n >= 0)
	{
		write(1, &poz, 1);
	}
	else
	{
		write(1, &neg, 1);
	}
}
