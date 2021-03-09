/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_rrange.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sylducam <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/22 12:23:28 by sylducam     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/22 13:02:22 by sylducam    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_rrange(int start, int end)
{
	int size;
	int i;
	int *tab;

	if (end > start)
		size = end - start + 1;
	else
		size = start - end + 1;
	i = 0;
	tab = malloc(sizeof(int) * size);
	if (tab == 0)
		return (0);
	if (end > start)
		while (i < size)
		{
			tab[i] = end;
			end--;
			i++;
		}
	else
		while (i < size)
		{
			tab[i] = end;
			end++;
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
	ft_rrange(-7, 2147483647);
	return (0);
}
