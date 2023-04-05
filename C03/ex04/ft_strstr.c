/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchalaby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:52:48 by hchalaby          #+#    #+#             */
/*   Updated: 2022/11/24 17:53:04 by hchalaby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
char	*ft_strstr(char *str, char *to_finde)
{
	int	i;

	i = 0;
	if (!(to_finde[i]))
		return (str);
	while (*str)
	{
		while (str[i] && (str[i] == to_finde[i]))
		{
			i++;
			if (!to_finde[i])
				return (str);
		}
		i = 0;
		str++;
	}
	return (0);
}

/*
int main()
{
	char s[] = "";
	char v[] = "ddd";
	printf("%s\n", ft_strstr(s, v));
	printf("%s", strstr(s, v));
}
*/