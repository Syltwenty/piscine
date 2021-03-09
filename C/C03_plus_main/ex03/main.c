/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sylducam <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/06 10:40:30 by sylducam     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/06 21:52:15 by sylducam    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char src[] = "defgh";
	char dest[15] = "abc";
	char src2[] = "defgh";
	char dest2[15] = "abc";

	printf("%s\n%s\n", ft_strcat(dest, src), strcat(dest2, src2));
	return (0);
}
