/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sylducam <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/05 14:26:55 by sylducam     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/07 17:59:45 by sylducam    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index_src;
	unsigned int	index_dest;

	index_src = 0;
	index_dest = 0;
	while (index_src < n && src[index_src] != '\0')
	{
		if (src[index_src] != '\0')
		{
			dest[index_dest] = src[index_src];
			index_src++;
		}
		index_dest++;
	}
	if (index_src < n)
	{
		while (index_dest < n)
		{
			dest[index_dest] = '\0';
			index_dest++;
		}
	}
	return (dest);
}
