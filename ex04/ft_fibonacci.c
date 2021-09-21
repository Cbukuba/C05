/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 07:59:32 by cbukuba           #+#    #+#             */
/*   Updated: 2021/09/20 07:59:35 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0 )
		return (-1);
	if (index == 0)
		return (0);
	if (index == 2 || index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
// 0 1 1 2 3 5 8 13 
// #include <stdio.h>
// int main ()
// {
// 	printf("%d", ft_fibonacci(4));
// }