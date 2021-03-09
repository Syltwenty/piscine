/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sylducam <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/06 10:40:30 by sylducam     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/09 14:32:33 by sylducam    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char *str = "ooowo4589";
	char *to_find = "oowo";
	char *str2 = "ooowo4589";
	char *to_find2 = "oowo";

	printf("%s\n%s\n", ft_strstr(str, to_find), strstr(str2, to_find2));
	return (0);
}
