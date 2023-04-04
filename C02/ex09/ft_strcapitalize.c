/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchalaby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:26:17 by hchalaby          #+#    #+#             */
/*   Updated: 2022/11/23 17:28:01 by hchalaby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	if (str[0] >= 97 && str[0] <= 122)
			str[0] -= 32;
	while (str[i])
	{
		if (!(str[i] >= 65 && str[i] <= 90))
		{
			if (!(str[i] >= 97 && str[i] <= 122))
			{
				if (!(str[i] >= 48 && str[i] <= 57))
					if (str[i + 1] >= 97 && str[i + 1] <= 122)
						str[i + 1] -= 32;
			}
		}
		i++;
	}
	return (str);
}
