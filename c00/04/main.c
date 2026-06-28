#include <unistd.h>
#include <stdio.h>
#include <string.h>
void ft_print_comb(int nbr){
   char n ;
   char c ; 
   int i;
   n = nbr / 10 + '0';
   c = nbr % 10 + '0';
   
    write(1 , &n ,1);
    write(1 , &c ,1);
    write(1 ,"," ,1);
   
}
int main()  
{
    for ( int i = 0; i < 100; i++)
    {
        ft_print_comb(i);
    }
    return 0;
}   