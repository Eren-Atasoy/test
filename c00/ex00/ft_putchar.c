/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eratasoy <erenatasoy04@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 04:36:32 by eratasoy          #+#    #+#             */
/*   Updated: 2025/04/11 04:54:14 by eratasoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar (char c)
{
    write(1, &c, 1);
}

int main(int argc, char const *argv[])
{
    ft_putchar('A');
    return 0;
}
