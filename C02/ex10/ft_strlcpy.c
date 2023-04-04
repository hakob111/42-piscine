/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 22:11:05 by hchalaby          #+#    #+#             */
/*   Updated: 2022/11/24 00:19:37 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (size[i])
	{
		dest[i] = src[i];
		i++;
		j++;
	}
	dest[i] = '\0';
	while (j < size)
	{
		dest[j] = '\0';
	}
	while (src[i])
	{
		i++;
	}
	return (i);
}
