/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eratasoy <erenatasoy04@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 04:56:02 by eratasoy          #+#    #+#             */
/*   Updated: 2025/04/11 05:03:09 by eratasoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet (void)
    {
        char c;
        c = 'a';
        while (c <= 'z')
        {
            write(1, &c, 1);
            c++;
        }
       
        write(1, &c, 1);
    }

int main(int argc, char const *argv[])
{
    ft_print_alphabet();
    return 0;
}