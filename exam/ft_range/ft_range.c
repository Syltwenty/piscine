/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_range.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sylducam <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/22 12:03:11 by sylducam     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/22 12:22:57 by sylducam    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int start, int end)
{
	int size;
	int i;
	int j;
	int *tab;

	size = 0;
	i = 0;
	j = start;
	if (end < start)
		while (j >= end)
		{
			j--;
			size++;
		}
	else
		while (j <= end)
		{
			j++;
			size++;
		}
	tab = malloc(sizeof(int) * size);
	if (tab == 0)
		return (0);
	if (end < start)
		while (i < size)
		{
			tab[i] = start;
			start--;
			i++;
		}
	else
		while (i < size)
		{
			tab[i] = start;
			start++;
			i++;
		}
	i = 0;
	while (i < size)
	{
		printf("[%d] ", tab[i]);
		i++;
	}
	return (tab);
}

int		main(void)
{
	ft_range(0, 0);
	return (0);
}
