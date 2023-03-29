/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 00:45:27 by hchalaby          #+#    #+#             */
/*   Updated: 2022/11/22 03:15:31 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	midle;
	int	i;
	int	val;

	midle = (((size / 2) + (size % 2)) - 1);
	i = 0;
	size = size -1;
	while (i <= midle)
	{
		val = tab[i];
		tab[i] = tab[size - i];
		tab[size - i] = val;
		i++;
	}
}
