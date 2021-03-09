/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_range.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sylducam <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/14 12:56:16 by sylducam     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/14 18:51:37 by sylducam    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_atoi(char *str)
{
	int nbr;
	int sign;
	nbr = 0;
	sign = 1;
	while (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f'
			|| *str == '\r' || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nbr = nbr * 10 + *str - '0';
		str++;
	}
	return (nbr * sign);
}

int		*ft_range(int min, int max)
{
	int		*array;
	int		size;
	int		i;

	if (min >= max)
	{
		array = 0;
		return (array);
	}
	size = max - min;
	array = malloc(sizeof(int) * size);
	i = 0;
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}

int		main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	int *tab;
	int i;
	int size;
	tab = ft_range(ft_atoi(argv[1]), ft_atoi(argv[2]));
	size = ft_atoi(argv[2]) - ft_atoi(argv[1]);
	if (size > 0)
	{
		i = 0;
		while (i < size)
		{
			printf(" [%d] ", tab[i]);
			i++;
		}
	}
	return (0);
}
