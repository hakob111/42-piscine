/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchalaby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 13:38:59 by hchalaby          #+#    #+#             */
/*   Updated: 2022/11/22 13:39:03 by hchalaby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	m;

	i = 0;
	m = 0;
	while (m < size - 1)
	{
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				ft_swap (tab + i, (tab + (i + 1)));
				i++;
			}
			else
				i++;
		}
		i = 0;
		m++;
		size--;
	}	
}
