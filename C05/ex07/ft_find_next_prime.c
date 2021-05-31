/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_find_next_prime.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sylducam <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/12 17:09:20 by sylducam     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/13 15:26:31 by sylducam    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_try_prime(int nb)
{
	long	nblong;
	long	div;

	nblong = nb;
	div = 2;
	if (nblong < 2)
		return (1);
	while (div * div <= nblong)
	{
		if (nblong % div == 0)
			return (1);
		div++;
	}
	return (0);
}

int		ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (ft_try_prime(nb))
		nb++;
	return (nb);
}
