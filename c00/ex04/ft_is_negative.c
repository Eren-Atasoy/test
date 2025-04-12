/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eratasoy <erenatasoy04@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 05:52:43 by eratasoy          #+#    #+#             */
/*   Updated: 2025/04/11 06:10:20 by eratasoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}
void ft_is_negative(int n)
{
  
    if(n<0)
    {
        ft_putchar('N');
    }
    else if(n>0)
    {
        ft_putchar('P');
    }
    
    


}

int main(void)
{
    ft_is_negative(-1);
    return 0;
}