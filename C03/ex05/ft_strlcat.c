/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchalaby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:04:45 by hchalaby          #+#    #+#             */
/*   Updated: 2022/11/29 17:04:54 by hchalaby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *st)
{
	unsigned int	i;

	i = 0;
	while (st[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	d_len;
	unsigned int	s_len;

	i = ft_strlen(dest);
	j = 0;
	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	if (size < 1)
	{
		return (s_len + size);
	}
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < d_len)
		return (s_len + size);
	else
		return (d_len + s_len);
}
