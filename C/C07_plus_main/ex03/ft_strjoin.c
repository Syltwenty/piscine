/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sylducam <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/14 19:13:32 by sylducam     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/15 10:17:31 by sylducam    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_strslen(char **str)
{
	int i;
	int j;
	int result;

	i = 0;
	j = 0;
	result = 0;
	while (str[i])
	{
		while (str[i][j])
			j++;
		result += j;
		j = 0;
		i++;
	}
	result += i;
	return (result + 1);
}

char	*ft_fill(int size, char *dest, char **strs, char *sep)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i <= size - 1)
	{
		while (strs[i][j])
		{
			*dest = strs[i][j];
			j++;
			dest++;
		}
		j = 0;
		while (sep[j] && i < size - 1)
		{
			*dest = sep[j];
			j++;
			dest++;
		}
		j = 0;
		i++;
	}
	*dest = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;

	i = 0;
	if (size < 1)
	{
		dest = NULL;
		return (dest);
	}
	dest = malloc(sizeof(char) * ft_strslen(strs) +
			((size - 1) * ft_strlen(sep)));
	ft_fill(size, dest, strs, sep);
	return (dest);
}

int		main(int argc, char **argv)
{
	printf("%s\n", ft_strjoin(argc, argv, ", "));
	return (0);
}
