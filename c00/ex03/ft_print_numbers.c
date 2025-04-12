/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eratasoy <erenatasoy04@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 05:46:22 by eratasoy          #+#    #+#             */
/*   Updated: 2025/04/11 05:51:59 by eratasoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers()
{
    char sayi='0';
    while(sayi<='9')
    {
        write(1,&sayi,1);
        sayi++;
    }
}


int main(void)
{
    ft_print_numbers();
    return 0;
}