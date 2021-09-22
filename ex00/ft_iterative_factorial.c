/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.beµ>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 17:51:00 by cbukuba           #+#    #+#             */
/*   Updated: 2021/09/19 17:51:03 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fac;
	int	i;

	i = 1;
	fac = 1;
	if (nb == 0)
		return (1);
	if (nb > 12 || nb < 0)
		return (0);
	while (i <= nb)
	{
		fac *= i;
		i ++;
	}
	return (fac);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d", ft_iterative_factorial(4));
// }