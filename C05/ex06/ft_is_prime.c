/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_is_prime.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sylducam <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/12 16:18:26 by sylducam     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/12 21:51:36 by sylducam    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	long	longnb;
	long	div;

	longnb = nb;
	div = 2;
	if (longnb < 2)
		return (0);
	while (div * div <= longnb)
	{
		if (longnb % div == 0)
			return (0);
		div++;
	}
	return (1);
}
