

void ft_putchar(char x)
{
    write(1,&x,1);
}

void ft_convert_hex(char str)
{
    ft_putchar('\\');
    ft_putchar("0123456789abcdef"[str/16]);
    ft_putchar("0123456789abcdef"[str%16]);

}
void *ft_print_memory(void *addr, unsigned int size)
{
    unsigned long address = addr;
    
}