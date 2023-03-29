/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchalaby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:46:06 by hchalaby          #+#    #+#             */
/*   Updated: 2022/11/21 13:10:50 by hchalaby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printing(int m[3])
{
	write (1, &m[0], 1);
	write (1, &m[1], 1);
	write (1, &m[2], 1);
	if (m[0] != 55)
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	a[3];

	a[0] = 48;
	a[1] = 49;
	a[2] = 50;
	while (a[0] < 56)
	{
		printing(a);
		a[2]++;
		if (a[2] > 57)
		{
			a[1]++;
			a[2] = a[1] + 1;
		}
		if (a[1] == 57)
		{
			a[0]++;
			a[1] = a[0] + 1;
			a[2] = a[0] + 2;
		}
	}
}