/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sylducam <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/01 10:23:50 by sylducam     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/01 14:19:40 by sylducam    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_min_number(unsigned int min_nb)
{
	if (min_nb > 0)
	{
		ft_min_number(min_nb / 10);
		ft_putchar(min_nb % 10 + '0');
	}
}

void	ft_actual_putnbr(int nb)
{
	unsigned int min_nb;

	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		min_nb = nb;
		ft_min_number(min_nb);
	}
	else if (nb > 0)
	{
		ft_actual_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
		ft_putchar(nb + '0');
	else
		ft_actual_putnbr(nb);
}
