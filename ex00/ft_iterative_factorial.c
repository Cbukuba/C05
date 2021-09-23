/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 20:55:34 by cbukuba           #+#    #+#             */
/*   Updated: 2021/09/23 20:55:37 by cbukuba          ###   ########.fr       */
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
	if (nb < 0)
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
