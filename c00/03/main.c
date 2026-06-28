#include <unistd.h>
#include <stdio.h>
#include <string.h>
void ft_print_numbers(void){
    char i;
    for ( i = '0'; i <= ':'; i++)
    {
       write(1, &i, 1);
       write(1 ,"\n", 2);
    } 
}
int main()
{
    ft_print_numbers();

    return 0;
}   