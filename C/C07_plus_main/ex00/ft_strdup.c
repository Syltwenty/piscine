/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sylducam <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/13 17:06:43 by sylducam     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/14 18:57:07 by sylducam    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	i--;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		src_len;
	char	*dest;

	i = 0;
	src_len = ft_strlen(src);
	dest = malloc(sizeof(char) * (ft_strlen(src) + 1));
	while (i < src_len + 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	int i;
	char name[] = "hello 42";
	printf("%s\n", ft_strdup(name));
	printf("%s\n", strdup(name));
	char *tab = ft_strdup(name);
	char *tab2    = strdup(name);
	i = 0;
	while (i < 12)
	{
		printf("%d    ", tab[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i < 12)
	{
		printf("%d    ", tab2[i]);
		i++;
	}
	return (0);
}
