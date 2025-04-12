/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eratasoy <erenatasoy04@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 05:05:01 by eratasoy          #+#    #+#             */
/*   Updated: 2025/04/11 05:47:12 by eratasoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}
void ft_print_reverse_alphabet(void)
{
    char z='z';

    while('a'<=z)
    {
        ft_putchar(z);
        z--;
    }

}


int main(void)
{
    ft_print_reverse_alphabet();
    return 0;
}
