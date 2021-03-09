/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sylducam <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/09 16:07:56 by sylducam     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/09 16:24:25 by sylducam    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dst, char *src);

int		main(void)
{
	char dst[] = "abcdefgh";
	printf("%s\n%s\n", ft_strcpy(dst, "zzz"), strcpy(dst, "zzz"));
	return (0);
}
