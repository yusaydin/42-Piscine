/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusaydin <yusaydin@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:09:06 by yusaydin          #+#    #+#             */
/*   Updated: 2023/09/14 17:48:49 by yusaydin         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!to_find[j])
		return (str);
	while (str[i])
	{
		while (str[i + j] == to_find[j] && str [i + j] != '\0')
			j++;
		if (!to_find[j])
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}
