#include <stdio.h>

int ft_atoi_base(char *str, char *base);
int ft_check_radix(char *base);

int main (void)
{
    int i;

    i = ft_check_radix("0123456789ABCDEF");
    //i = ft_atoi_base("2A", "0123456789ABCDEF");
    printf("%i", i);
}

/* int ft_atoi_base(char *str, char *base)
{

} */

int ft_check_radix(char *base)
{
    int counter;
    
    counter = 0;
    while (*base)
    {
        counter++;
        base++;
    }
    return counter;
}

/* int ft_atoi(char *str)
{
    int output;
    int counter;
    int pos_or_neg;

    output = 0;
    counter = 0;
    pos_or_neg = 1;
    while(str[counter] == ' ')
        counter++;
    while (str[counter] == '+' || str[counter] == '-')
    {
        if (str[counter] == '-')
            pos_or_neg *= -1;
        counter++;
    }
    while (str[counter] >= '0' && str[counter] <= '9')
    {
        output = output * 10 + (str[counter] - '0');
        counter++;
    } 
} */