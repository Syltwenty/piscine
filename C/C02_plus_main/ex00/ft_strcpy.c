/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sylducam <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/05 11:20:22 by sylducam     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/05 14:47:13 by sylducam    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	*ft_strcpy(char *dest, char *src)
{
	int		index_src;
	int		index_dest;

	index_src = 0;
	index_dest = 0;
	while (src[index_src] != '\0')
	{
		dest[index_dest] = src[index_src];
		index_src++;
		index_dest++;
	}
   	while (dest[index_dest] != '\0')
    {
        dest[index_dest] = '\0';
        index_dest++;
    }
	return (dest);
}
