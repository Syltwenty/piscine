/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sylducam <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/05 20:41:03 by sylducam     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/06 21:22:13 by sylducam    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;
	unsigned int	len;

	index = 0;
	len = 0;
	if (n == 0)
		return (ft_strlen(src));
	while (n > 1 && src[index])
	{
		dest[index] = src[index];
		index++;
		n--;
	}
	dest[index] = '\0';
	return (ft_strlen(src));
}
