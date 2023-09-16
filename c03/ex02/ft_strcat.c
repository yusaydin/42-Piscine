/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusaydin <yusaydin@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:38:23 by yusaydin          #+#    #+#             */
/*   Updated: 2023/09/14 18:21:51 by yusaydin         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (dest[len])
	{
		len++;
	}
	while (src[i])
	{
		dest[i + len] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
